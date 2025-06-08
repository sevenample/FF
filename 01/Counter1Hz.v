/* 利用1Hz的clock來做計數器 */
module Counter1Hz(
    iClk1Hz,   /* 1Hz clock */
    iRst_n,    /* negative reset */

    oCounter   /* counter output */
);

input         iClk1Hz;   /* 1Hz clock */
input         iRst_n;    /* negative reset */

output [3:0]  oCounter;  /* counter output */

reg [3:0] oCounter;  /* declare oCounter to register property */

/* 利用1Hz時脈來計數 */
always@(posedge iClk1Hz or negedge iRst_n) begin
    if(!iRst_n) begin
        oCounter <= 0; /* 初始暫存器 */
    end else begin
        oCounter <= oCounter +1;   /* 向上計數*/
    end
end
endmodule