module sub3 (
    input logic [2:0] A,
    input logic [2:0] B,
    input logic Cin,

    output logic [2:0] S,
    output logic Cout
);

  sub #(.WIDTH(3)) sub_i (.*);

endmodule
