#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool primeNumberSieve(int num) {
	if (num == 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, a;
	int count=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		bool key = primeNumberSieve(a);
		if (key == true)
			count++;
	}
	cout << count;
}