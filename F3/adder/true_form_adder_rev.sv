module true_form_adder_rev #(
    parameter int WIDTH = 4
) (
    input logic [WIDTH-1:0] A,
    input logic [WIDTH-1:0] B,

    output logic [WIDTH-1:0] S,
    output logic OF
);

  logic sign_A, sign_B, sign_S;
  assign sign_A = A[WIDTH-1];
  assign sign_B = B[WIDTH-1];
  assign S[WIDTH-1] = sign_S;

  logic [WIDTH-2:0] mag_A, mag_B, mag_S;
  assign mag_A = A[WIDTH-2:0];
  assign mag_B = B[WIDTH-2:0];
  assign S[WIDTH-2:0] = mag_S;

  logic cmp;
  ge ge_i (
      .A(mag_A),
      .B(mag_B),
      .O(cmp)
  );
  // assign cmp = mag_A >= mag_B;

  logic diff_sign;
  assign diff_sign = sign_A ^ sign_B;

  logic [WIDTH-2:0] adder_S, subtractor_S, subtractor_A, subtractor_B;
  logic adder_C, subtractor_C;

  logic not_zero;
  assign not_zero = |mag_S;

  assign OF = (!diff_sign) & adder_C;
  assign subtractor_A = cmp ? mag_A : mag_B;
  assign subtractor_B = cmp ? mag_B : mag_A;
  assign mag_S = diff_sign ? subtractor_S : adder_S;
  assign sign_S = (diff_sign & (!cmp)) ^ sign_A & not_zero;

  add adder (
      .A(mag_A),
      .B(mag_B),
      .S(adder_S),
      .Cout(adder_C)
  );

  sub subtractor (
      .A(subtractor_A),
      .B(subtractor_B),
      .S(subtractor_S),
      .Cout(subtractor_C)
  );

  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(1, true_form_adder);
  end

endmodule
