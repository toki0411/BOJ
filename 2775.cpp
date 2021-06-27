#include <iostream>
using namespace std;

int ppp(int f, int h) {
	int a = 0;
	if (h == 1) {
		return 1;
	}
	if (f == 0)
	{
		return h;
	}
	return (ppp(f - 1, h) + ppp(f, h - 1));
}


int main() {
	int t, k, n;
	cin >> t;
	while(t--) {
		cin >> k;
		cin >> n;
		cout << ppp(k,n)<<"\n";
	}
}


