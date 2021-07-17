#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a, b, t;
	cin >> a >> b;
	cin >> t;
	bool key = false;
	while (key==false) {
		if ((b + t) >= 60) {
			a++;
			t -= 60;
			if ((b + t) >= 60)key = false;
			else key = true;
		}
		else {
			//b += t;
			key = true;
		}
		if (a > 23)a -= 24;
		if (key == true)
			cout << a << ' ' << b+t;
	}

}