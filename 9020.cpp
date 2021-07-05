#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int a, b;

void primeNumberSieve(int num) {
	int arr[10001] = {0,};
	for (int i = 2; i <= num; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= num; i++) {
		if (arr[i] == -1) continue;
		for (int j = i + i; j <= num; j += i) {
			arr[j] = -1;
		}
	}
	for (int i = 2; i <= num/2; i++) {
			if ((arr[i] != -1) && (arr[num-i] != -1)) {
				if (arr[i] + arr[num-i] == num)
				{
					a = i; b = num-i;
				}
			}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		if ((n % 2 == 0)&&(n>=4)) { //nÀº Â¦¼ö 
			primeNumberSieve(n);
			cout << a <<' '<<b<< "\n";
		}
	}
}