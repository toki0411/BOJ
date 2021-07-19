#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x, y, w, h;
	int a, b;
	cin >> x >> y >> w >> h;
	if (x <= w / 2) {
		a = x;
	}
	else {
		a = w - x;
	}
	if(y<=h/2){
		b = y;
	}
	else {
		b = h - y;
	}
	if (a < b)
		cout << a;
	else
		cout << b;
}