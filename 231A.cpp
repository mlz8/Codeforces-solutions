#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;



int main()
{
	int n;
	cin >> n;
	int nr_problems = 0;
	for (auto i=0; i < n; i++) {
		int aux1, aux2, aux3;
		cin >> aux1 >> aux2 >> aux3;
		if (aux1+aux2+aux3 >= 2) {
			nr_problems++;
		}
	}
	cout << nr_problems;
	return 0;

}