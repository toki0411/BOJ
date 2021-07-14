#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int a, b;
		int d=0;
		cin >> a >> b;
		if ((a == 1) || (b == 1)) {
			cout << a * b<<endl;
			continue;
		}
		if(a<b){
			for (int i = 2; i <= a; i++) {
				if ((a % i == 0) && (b % i == 0)) {
					d = i;
				}
			}
			if (d == 0) {
				cout << a * b << endl; continue;
			}
			else cout << d * (a /d ) * (b /d )<<endl;
		}
		else{
			for (int i = 2; i <= b; i++) {
				if ((a % i == 0) && (b % i == 0)) {
					d = i;
				}
			}
			if (d == 0) {
				cout << a * b << endl; continue;
			}
			else cout << d * (a / d) * (b / d) << endl;
		}
		d = 0;
		a = 0; b = 0;
	}
}