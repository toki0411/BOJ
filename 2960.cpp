#include <iostream>
#include <vector>
using namespace std;
int arr[1001];
int primeNumberSieve(int num,int b){
	int count = 0;
	for (int i = 2; i <= num; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= num; i++) {
		if (arr[i] == 0) continue;
		for (int j = i ; j <= num; j += i) {
			if (arr[j] == 0) continue;
			else {
				count++;
				if (count == b)
					return arr[j];
				arr[j] = 0;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	int result = primeNumberSieve(N,K);
	cout << result;
}
