module _7447(
    input P,
    input Q,
    input R,
    output A,
    output B,
    output C,
    output D
);

wire F;

// MUX answer B (XOR)
assign F = P ^ Q ^ R;

// 7447 BCD input
// F=0 -> 0000 -> display 0
// F=1 -> 0001 -> display 1

assign A = F;
assign B = 1'b0;
assign C = 1'b0;
assign D = 1'b0;

endmodule
