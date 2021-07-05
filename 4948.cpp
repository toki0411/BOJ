#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int primeNumberSieve(int num) {
	if (num == 1) return 1;
	int count = 0;
	int arr[246913] = { 0, };
	for (int i = num+1; i <= 2*num; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= 2*num; i++) {
		if (arr[i] == -1) continue;
		for (int j = i + i; j <= 2*num; j += i) {
			arr[j] = -1;
		}
	}
	for (int i = num+1; i <= 2*num; i++) {
		if (arr[i] != -1)
			count++;
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a;
	while (true) {
		cin >> a;
		if (a == 0) {
			break;
		}
		cout << primeNumberSieve(a)<<'\n';
	}
}