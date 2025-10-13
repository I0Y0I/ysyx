module half_subtractor (
    input logic A,
    input logic B,

    output logic S,
    output logic C
);

  assign S = A ^ B;
  assign C = (~A) & B;

endmodule
