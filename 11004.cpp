#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N,K;
	int a;
	cin >> N>>K;
	while (N--) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	int k = K - 1;
	cout << arr[k];
}