#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int unfairness = -1;
int N, K, minc, maxc, ufair;
int *candies, *subset;

void check() {
	ufair = 0;
	minc = subset[0];
	maxc = subset[0];

	for (int i = 0; i < K; i++) {
		minc = min(minc,subset[i]);
		maxc = max(maxc, subset[i]);
	}

	ufair = maxc - minc;

	if (ufair < unfairness || unfairness == -1) {
		unfairness = ufair;
	}
}

void process(int subsetSize, int nextIndex) {
	if (subsetSize == K) {
		check();
	} else {
		for (int j = nextIndex; j < N; j++) {
			subset[subsetSize] = candies[j];
			process(subsetSize + 1, j + 1);
		}
	}
}

int main() {
	cin >> N >> K;
	candies = new int[N];
	subset = new int[K];

	for (int i = 0; i < N; i++)
		cin >> candies[i];

	process(0, 0);

	cout << unfairness << endl;

	return 0;
}
