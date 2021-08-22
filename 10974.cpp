#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	int fac=1; 
	cin >> N;
	for (int i = 1; i <= N; i++) {
		arr.push_back(i);
		cout << i << ' ';
	}
	cout << "\n";
	for (int i = N; i > 0; i--) {
		fac *= i;
	}
	for (int i = 0; i < fac; i++) {
		if (next_permutation(arr.begin(), arr.end())) {
			for (int i = 0; i < N; i++) {
				cout << arr[i] << ' ';
			}
			cout << "\n";
		}
	}
}