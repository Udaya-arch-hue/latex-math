module seven_segment(
    input P,
    input Q,
    input R,
    output seg_a,
    output seg_b,
    output seg_c,
    output seg_d,
    output seg_e,
    output seg_f,
    output seg_g
);

wire [2:0] in;
assign in = {P,Q,R};

reg a,b,c,d,e,f,g;

// Common Anode: LOW = ON
assign seg_a = ~a;
assign seg_b = ~b;
assign seg_c = ~c;
assign seg_d = ~d;
assign seg_e = ~e;
assign seg_f = ~f;
assign seg_g = ~g;

always @(*) begin
    case(in)

    3'b000: begin   // 0 display
        a=1; b=1; c=1; d=1; e=1; f=1; g=0;
    end

    3'b001: begin   // 1 display
        a=0; b=1; c=1; d=0; e=0; f=0; g=0;
    end

    default: begin  // OFF
        a=0; b=0; c=0; d=0; e=0; f=0; g=0;
    end

    endcase
end

endmodule
