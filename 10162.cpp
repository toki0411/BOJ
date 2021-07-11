#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a = 0;
	int c = 0;
	int arr[3] = { 300,60,10 };
	cin >> a;
	if (a % 10 != 0)
		cout << -1;
	else {
		for (int i = 0; i < 3; i++) {
			cout << (a / arr[i]) << ' ';
			a = a % arr[i];
		}
	}
}