#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int a;
	int max = 0;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[a]++;
		if (a > max)max = a;
	}
	for (int i = 1; i <= max; i++) {
		for (int k = 0; k < arr[i]; k++) {
			cout << i<<'\n';
		}
	}
}