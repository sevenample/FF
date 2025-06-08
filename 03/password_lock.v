module password_lock(
    input clk,
    input rst_n,               // BUTTON[0]（重置）
    input confirm,             // BUTTON[2]（下降沿觸發）
    input [3:0] sw,            // SW[3:0] 輸入數字
    output reg [6:0] hex0,
    output reg [6:0] hex1,
    output reg [6:0] hex2,
    output reg [6:0] hex3,
    output reg [9:0] ledg
);

    // ------------------------
    // 密碼設定：5 2 0 (BCD)
    // ------------------------
    parameter [3:0] PWD0 = 4'd0;
    parameter [3:0] PWD1 = 4'd2;
    parameter [3:0] PWD2 = 4'd5;

    reg [3:0] input_code[2:0];
    reg [1:0] input_index;
    reg [3:0] error_count;
    reg [2:0] state;

    localparam IDLE    = 3'd0,
               INPUT   = 3'd1,
               CHECK   = 3'd2,
               UNLOCK  = 3'd3,
               ERROR   = 3'd4;

    reg confirm_prev;
    wire confirm_negedge = (confirm_prev == 1'b1 && confirm == 1'b0);

    // ------------------------
    // 七段顯示轉碼器
    // ------------------------
    function [6:0] seg;
        input [3:0] x;
        case (x)
            4'h0: seg = 7'b100_0000;
            4'h1: seg = 7'b111_1001;
            4'h2: seg = 7'b010_0100;
            4'h3: seg = 7'b011_0000;
            4'h4: seg = 7'b001_1001;
            4'h5: seg = 7'b001_0010;
            4'h6: seg = 7'b000_0010;
            4'h7: seg = 7'b111_1000;
            4'h8: seg = 7'b000_0000;
            4'h9: seg = 7'b001_0000;
            4'hA: seg = 7'b000_1000;  // A
            4'hB: seg = 7'b000_0011;  // b
            4'hC: seg = 7'b100_0110;  // C
            4'hD: seg = 7'b010_0001;  // d
            4'hE: seg = 7'b000_0110;  // E
            4'hF: seg = 7'b000_1110;  // F
            default: seg = 7'b111_1111;
        endcase
    endfunction

    // ------------------------
    // 主邏輯
    // ------------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            input_index <= 0;
            error_count <= 0;
            state <= IDLE;
            ledg <= 10'b0;
            input_code[0] <= 0;
            input_code[1] <= 0;
            input_code[2] <= 0;
            hex0 <= 7'h7F;
            hex1 <= 7'h7F;
            hex2 <= 7'h7F;
            hex3 <= 7'h7F;
        end else begin
            confirm_prev <= confirm;

            case (state)
                IDLE: begin
						  hex0 <= 7'h7F;
						  hex1 <= 7'h7F;
						  hex2 <= 7'h7F;
						  hex3 <= 7'h7F;
                    ledg <= 10'b0;
						  ledg[0] <= 1;
                    input_index <= 0;
                    state <= INPUT;
                    
                end

                INPUT: begin
                    if (confirm_negedge) begin
                        input_code[input_index] <= sw;

                        // 顯示輸入位置
                        ledg[2:0] <= (1 << input_index+1);

                        // 顯示輸入的數字
                        case (input_index)
                            2'd0: hex0 <= seg(sw);
                            2'd1: hex1 <= seg(sw);
                            2'd2: hex2 <= seg(sw);
                        endcase

                        // 準備下一位
                        if (input_index < 2)
                            input_index <= input_index + 1;
                        else
                            state <= CHECK;
                    end
                end

                CHECK: begin
                    input_index <= 0;
                    if (input_code[0] == PWD0 &&
                        input_code[1] == PWD1 &&
                        input_code[2] == PWD2) begin
                        state <= UNLOCK;
                    end else begin
                        error_count <= error_count + 1;
                        state <= ERROR;
                    end
                end

                UNLOCK: begin
                    // 顯示 "OPEn"
                    hex3 <= seg(0);    // O
                    hex2 <= seg(15);   // P (用 F 代替接近)
                    hex1 <= seg(14);   // E
                    hex0 <= seg(13);   // n
                    ledg[3:0] <= 4'b1111;
                end

                ERROR: begin
                    // 顯示 "ErrX"
                    hex3 <= seg(14);       // E
                    hex2 <= seg(13);       // r
                    hex1 <= seg(13);       // r
                    hex0 <= seg(error_count); // X = 錯誤次數
                    ledg[9] <= ~ledg[9];   // 警告閃爍
						  if (confirm_negedge) begin
								state <= IDLE;
						  end
                end
            endcase
        end
    end
endmodule
