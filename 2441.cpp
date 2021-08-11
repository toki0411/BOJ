#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int t = 0;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < t; k++) {
			cout << ' ';
		}
		for (int c = 0; c < N - t; c++) {
			cout << '*';
		}
		t++;
		cout << endl;
	}
}