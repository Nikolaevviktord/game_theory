#include "tit_for_tat.cpp"
#include "always_false.cpp"
#include "tit_for_two_tats.cpp"
#include "always_true.cpp"
#include "data_struct.h"
#include <functional>
#include <map>

std::vector<std::function<bool(data_struct)>> functions = {
	tit_for_tat,
	always_false,
	tit_for_two_tats,
	always_true
};


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	std::map<std::function<bool(data_struct)>> points;
	
	for (auto i: functions) {
		for (auto j: functions) {
			data_struct data_for_i, data_for_j;
			
			data_for_i.round_num = 1;
			data_for_j.round_num = 1;

			int points_i = 0, points_j = 0;

			for (int i = 1; i <= 200; i++) {
				bool res_i = i(data_for_i);
				bool res_j = j(data_for_j);

				if (res_i && res_j) {
					points_i += 3;
					points_j += 3;
				}

				data_for_i.round_num++;
				data_for_j.round_num++;

				data_for_i.enemy_solutions.push_back(res_j);
				data_for_j.enemy_solutions.push_back(res_i);
			}

			points[i] += points_i;
			points[j] += points_j;
		}
	}

	for (auto [i, j]: points) 
		cout << i << " " << j << endl;

	return 0;
}
