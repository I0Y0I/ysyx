import cocotb
from cocotb.triggers import Timer

def get_value_from_true_form(x, width):
    sign = (x >> (width - 1)) & 0b1
    mag = x & ((1 << (width - 1)) - 1)
    return -mag if sign else mag

def get_true_form_from_value(x, width):
    sign = 1 if x < 0 else 0
    mag = -x if x < 0 else x 
    mag = mag & ((1 << (width - 1)) - 1)
    return (sign << (width - 1)) | mag

@cocotb.test()
async def test_true_form_adder(dut):
    """Test for true_form_adder"""
    WIDTH = int(dut.WIDTH.value)
    
    cocotb.log.info(f"WIDTH = {WIDTH}")

    for i in range(15):
        for j in range(15):

            dut.A.value = i
            dut.B.value = j

            await Timer(1, unit='ns')

            # Get DUT results
            dut_s = dut.S.value
            dut_of = dut.OF.value

            A_value = get_value_from_true_form(i, WIDTH)
            B_value = get_value_from_true_form(j, WIDTH)
            S_value = get_value_from_true_form(int(dut_s), WIDTH)
        
            S_true_value = A_value + B_value
            expected_s = get_true_form_from_value(S_true_value, WIDTH)
            S_of_value = get_value_from_true_form(expected_s, WIDTH)
            expected_of = 1 if (S_of_value != S_true_value) else 0

            cocotb.log.info(f"A={int(i):04b}({A_value:2d})\tB={int(j):04b}({B_value:2d})\tS={int(dut_s):04b}({S_value:2d})\tOF={dut_of}")

            # Compare
            assert ((S_value == S_of_value) and (dut_of == expected_of)), (
                f"Test failed: A={int(i):04b}, B={int(j):04b} | "
                f"DUT S={int(dut_s):04b}, Expected S={int(expected_s):04b} | "
                f"DUT OF={dut_of}, Expected OF={expected_of}"
            )
        
    cocotb.log.info("All tests passed!")
