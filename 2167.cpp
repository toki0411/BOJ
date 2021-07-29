#include<iostream>
using namespace std;
int arr[301][301];
int main() {
	int N, M;
	int a;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= M; k++) {
			cin >> a;
			arr[i][k] = a;
		}
	}
	int re;
	int sum = 0;
	int i, j;
	int x, y;
	cin >> re;
	for (int q = 0; q < re; q++) {
		cin >> i >> j >> x >> y;
		for (int k = i; k <= x; k++) {
			for (int p = j; p <= y; p++) {
				sum += arr[k][p];

			}
		}

		cout << sum << endl;
		sum = 0;
	}

}
