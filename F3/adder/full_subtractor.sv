module full_subtractor (
    input logic A,
    input logic B,
    input logic Cin,

    output logic S,
    output logic Cout
);
  logic S0, C0, C1;
  half_subtractor half_subtractor_1 (
      .A(A),
      .B(B),
      .S(S0),
      .C(C0)
  );

  half_subtractor half_subtractor_2 (
      .A(S0),
      .B(Cin),
      .S(S),
      .C(C1)
  );

  assign Cout = C0 | C1;
endmodule
