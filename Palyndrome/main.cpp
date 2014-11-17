#include <cmath>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

const int STR_SIZE = 10000;

int solve(char* str) {
	const int len = strlen(str);
	int count = 0;

	for (int i = 0; i < len / 2; i++) {
		count += abs(str[i] - str[(len -1) - i]);
	}

	return count;
}

int main() {
	int count;
	cin >> count;

	while (count > 0) {
		char* str = new char[STR_SIZE];
		cin >> str;
		cout << solve(str) << endl;
		count--;
	}

	return 0;
}
