import cocotb
from cocotb.triggers import Timer

def get_value_from_form(x, width):
    if x < (1 << width - 1):
        return x
    else:
        return -((1 << width - 1) - x)

@cocotb.test()
async def test_adder(dut):
    WIDTH = int(dut.WIDTH.value)
    cocotb.log.info(f"WIDTH = {WIDTH}")

    for a in range(15):
        for b in range(15):
            dut.A.value = a
            dut.B.value = b

            await Timer(1, unit='ns')

            dut_s = int(dut.S.value)
            dut_of = int(dut.OF.value)

            A_value = get_value_from_form(a, WIDTH)
            B_value = get_value_from_form(b, WIDTH)
            S_value = get_value_from_form(dut_s, WIDTH)

            expected_value = A_value + B_value
            expected_of = expected_value >= (1 << (WIDTH-1)) or expected_value <= -(1 << (WIDTH-1))
            expected_of = 1 if expected_of else 0
            
            cocotb.log.info(f"A={a:04b}({A_value:2d})\tB={b:04b}({B_value:2d})\tS={dut_s:04b}({S_value:2d})\tOF={dut_of}")

            assert ((dut_of == expected_of) and (expected_of or (S_value == expected_value))), (
                f"Test failed: A={a:04b}, B={b:04b} | "
                f"DUT S={dut_s:04b}, Expected S={expected_value:04b} | "
                f"DUT OF={dut_of}, Expected OF={expected_of}"
            )
        
    cocotb.log.info("All tests passed!")
