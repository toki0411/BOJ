#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vector<int> arr;
	int N,a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	int idx = 0;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		idx = i;
		for (int k = 0; k <= idx; k++) {
			sum += arr[k];
		}
	}
	cout << sum;
}