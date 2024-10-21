#include "data_struct.h"

bool tit_for_tat(data_struct input_data) {
	if (input_data.round_num <= 1) 
		return true;

	return input_data.enemy_solutions.back();
}
