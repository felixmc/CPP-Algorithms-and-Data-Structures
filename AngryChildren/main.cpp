#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int* candies = new int[N];

	for (int i = 0; i < N; i++)
		cin >> candies[i];

	sort(candies, candies + N);

	int unfairness = -1;

	for (int i = 0; i <= N - K; i++) {
		int ufair = candies[i + K - 1] - candies[i];
		if (unfairness == -1 || ufair < unfairness) {
			unfairness = ufair;
		}
	}

	cout << unfairness << endl;

	return 0;
}
