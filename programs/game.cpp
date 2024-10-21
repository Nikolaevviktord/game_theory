#include "tit_for_tat.cpp"
#include "always_false.cpp"
#include "tit_for_two_tats.cpp"
#include "always_true.cpp"
#include "data_struct.h"
#include <functional>
#include <map>
#include <iostream>

using namespace std;

map<string, function<bool(data_struct)>> functions = {
	"tit_for_tat": tit_for_tat,
	"always_false": always_false,
	"tit_for_two_tats": tit_for_two_tats,
	"always_true": always_true,
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map<string, int> points;
	
	for (auto i: functions) {
		for (auto j: functions) {
			data_struct data_for_i, data_for_j;
			
			data_for_i.round_num = 1;
			data_for_j.round_num = 1;

			int points_i = 0, points_j = 0;

			for (int k = 1; k <= 200; k++) {
				bool res_i = i.second(data_for_i);
				bool res_j = j.second(data_for_j);

				if (res_i && res_j) {
					points_i += 3;
					points_j += 3;
				}

				data_for_i.round_num++;
				data_for_j.round_num++;

				data_for_i.enemy_solutions.push_back(res_j);
				data_for_j.enemy_solutions.push_back(res_i);
			}

			points[i.first] += points_i;
			points[j.first] += points_j;
		}
	}

	for (auto i: points) 
		cout << i.first.first << " " << i.second << endl;

	return 0;
}
