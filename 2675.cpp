#include <iostream>
using namespace std;
int main() {
	string s;
	
	int c,N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> c >> s;
		int len = s.length();
		for (int r = 0; r < len; r++) {
			for (int k = 0; k < c; k++) {
				cout << s[r];
			}
		}
		cout << "\n";
	}
}