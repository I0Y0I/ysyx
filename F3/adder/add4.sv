module add4 (
    input logic [3:0] A,
    input logic [3:0] B,
    input logic Cin,

    output logic [3:0] S,
    output logic Cout
);

  add #(.WIDTH(4)) add_i (.*);

endmodule
