#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <math.h>

using namespace std;



int main() {
	int n;
	cin >> n;
	int max_nr_pass = 0;
	int nr_pass = 0;
	for (auto i = 0; i < n; i++) {
		int enter, exit;
		cin >> exit >> enter;
		nr_pass += enter;
		nr_pass -= exit;
		max_nr_pass = max(max_nr_pass, nr_pass); 
	}
	cout << max_nr_pass;
	return 0;

}