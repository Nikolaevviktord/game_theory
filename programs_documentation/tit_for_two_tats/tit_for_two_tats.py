import data_struct

def tit_for_two_tats(input_data: data_struct.data_struct) -> bool:
    if input_data.round_num <= 2:
        return True

    last_sol: bool = input_data.enemy_solutions[-1]
    prelast_sol: bool = input_data.enemy_solutions[-2]

    if not last_sol and not prelast_sol:
        return False

    return True
