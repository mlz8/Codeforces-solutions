// my first program in C++
#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;



int main()
{
	string team;
	cin >> team;
	char current_player = team[0];
	int counter = 1;
	bool dangereous = false;
	for (auto i=1; i < team.length(); i++) {
		if (team[i] == current_player) {
			counter++;
		} else{
			counter = 1;
			current_player = team[i];
		}
		if (counter >= 7) {
			dangereous = true;
		}
	}
	if (dangereous)
		cout << "YES";
	else
		cout << "NO";
	return 0;

}