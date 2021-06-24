#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int arr[1000];
int main(void) {
	int N, z;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> z;
		arr[i] = z;
	}
	sort(arr, arr + N);
	// 결과 확인 
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
	return 0;

}