#include "data_struct.h"

bool tit_for_two_tats(data_struct input_data) {
	bool last_sol = input_data.enemy_solutions.back();
	bool prelast_sol = input_data.enemy_solutions[input_data.enemy_solutions.size() - 2];

	if (!last_sol && !prelast_sol)
		return false;
	else
		return true;
}

