#include <iostream>
#pragma warning(disable:4996)

using namespace std;
int main() {
	int N;
	char arr[100];
	int sum = 0;
	cin >> N;
	cin >> arr;
	for (int i = 0; i < N; i++)
		sum += arr[i] - '0';
	cout << sum;
}