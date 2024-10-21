import data_struct

def tit_for_tat(input_data: data_struct.data_struct) -> bool:
    if input_data.round_num <= 1:
        return True

    return input_data.enemy_solutions[-1]
