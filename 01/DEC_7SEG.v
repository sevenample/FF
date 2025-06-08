//  Seven Segment control:
//            a 
//            __
//          f|  |b                              hgfedcba
//           |__|        segment code:  "0" ->  00111111 
//          e|g |c
//           |__| .h
//            d 
module DEC_7SEG(iHex_digit, oHEX);

input   [3:0] iHex_digit;  /* digital input */
output  [7:0] oHEX;        /* output to 7-seg display */

reg     [7:0] segment_data;

always @(iHex_digit) begin
// Case statement implements a logic truth table using gates
   case (iHex_digit)
        4'b0000: segment_data = 8'b_0011_1111;  // "0"
        4'b0001: segment_data = 8'b_0000_0110;  // "1"
        4'b0010: segment_data = 8'b_0101_1011;  // "2"
        4'b0011: segment_data = 8'b_0100_1111;  // "3"
        4'b0100: segment_data = 8'b_0110_0110;  // "4"
        4'b0101: segment_data = 8'b_0110_1101;  // "5"
        4'b0110: segment_data = 8'b_0111_1101;  // "6"
        4'b0111: segment_data = 8'b_0000_0111;  // "7"
        4'b1000: segment_data = 8'b_0111_1111;  // "8"
        4'b1001: segment_data = 8'b_0110_1111;  // "9"
        4'b1010: segment_data = 8'b_0111_0111;  // "a"
        4'b1011: segment_data = 8'b_0111_1100;  // "b"
        4'b1100: segment_data = 8'b_0011_1001;  // "c"
        4'b1101: segment_data = 8'b_0101_1110;  // "d"
        4'b1110: segment_data = 8'b_0111_1001;  // "e"
        4'b1111: segment_data = 8'b_0111_0001;  // "f"
        default: segment_data = 8'b_0011_1110;  // other case
    endcase
end
/* extract segment data bits and invert */
/* LED driver circuit is inverted */
assign oHEX  = ~segment_data;
endmodule