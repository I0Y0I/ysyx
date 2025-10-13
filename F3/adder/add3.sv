module add3 (
    input logic [2:0] A,
    input logic [2:0] B,
    input logic Cin,

    output logic [2:0] S,
    output logic Cout
);

  add #(.WIDTH(3)) add_i (.*);

endmodule
