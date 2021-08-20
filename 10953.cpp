#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	int a, b;
	char c;
	cin >> T;
	while (T--) {
		cin >> a >> c >> b;
		cout << a + b<<"\n";
	}
}