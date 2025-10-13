module ripple_borrow_subtractor #(
    parameter int WIDTH = 3
) (
    input logic [WIDTH-1:0] A,
    input logic [WIDTH-1:0] B,

    output logic [WIDTH-1:0] S,
    output logic Cout
);

  logic [WIDTH:0] C;
  assign C[0] = 1'b0;
  assign Cout = C[WIDTH];

  genvar i;
  generate
    for (i = 0; i < WIDTH; i++) begin : full_subtractor
      full_subtractor full_subtractor_i (
          .A(A[i]),
          .B(B[i]),
          .Cin(C[i]),
          .S(S[i]),
          .Cout(C[i+1])
      );
    end
  endgenerate
endmodule
