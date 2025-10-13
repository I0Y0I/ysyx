module ge #(
    parameter int WIDTH = 4
) (
    input logic [WIDTH-1:0] A,
    input logic [WIDTH-1:0] B,

    output logic O
);

  logic C;

  sub3 sub_i (
      .A(A),
      .B(B),
      .Cin(1'b0),
      .S(),
      .Cout(C)
  );

  assign O = !C;

endmodule
