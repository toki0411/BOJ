#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int sum = 0;
	int a = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += a * a;
	}
	cout << sum % 10;
}