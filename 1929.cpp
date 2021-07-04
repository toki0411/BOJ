#include <iostream>
using namespace std;
int arr[1000001];

void primeNumberSieve(int M, int N) {

	for (int i = M; i <= N; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= N; i++) {
		if (arr[i] == -1) continue;
		for (int j = i + i; j <= N; j += i) {
			arr[j] = -1;
		}
	}
	for (int i = M; i <= N; i++) {
		if ((arr[i] != -1)&&i!=1)
			cout << arr[i] << '\n';
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int M, N;
	cin >> M >> N;
	primeNumberSieve(M, N);
}