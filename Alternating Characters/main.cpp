#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

const int STR_SIZE = 100000;

int solve(char* str) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (i != 0 && str[i] == str[i-1]) {
            count++;
        }
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
