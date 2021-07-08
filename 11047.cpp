#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	vector<int> arr;
	cin >> N>>K;
	int a;
	int count = 0;
	for (int k = 0; k < N; k++) {
		cin >> a;
		arr.push_back(a);
	}
	for (int i = N - 1; i >= 0; i--) {
		if (K == 0)break;
		//µ¿Àü°¹¼ö += ³²Àºµ·/µ¿Àü
		count += K / arr[i];
		K = K % arr[i];
	}
	cout << count;
}