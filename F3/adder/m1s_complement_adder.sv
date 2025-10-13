module m1s_complement_adder #(
    parameter int WIDTH = 4
) (
    input logic [WIDTH-1:0] A,
    input logic [WIDTH-1:0] B,

    output logic [WIDTH-1:0] S,
    output logic OF
);
  logic [WIDTH:0] C;
  assign C[0] = C[WIDTH];

  genvar i;
  generate
    for (i = 0; i < WIDTH; i++) begin : g_adder
      full_adder full_adder_i (
          .A(A[i]),
          .B(B[i]),
          .Cin(C[i]),
          .S(S[i]),
          .Cout(C[i+1])
      );
    end
  endgenerate

  assign OF = C[WIDTH] ^ C[WIDTH-1];
endmodule
