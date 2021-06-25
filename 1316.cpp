#include <iostream>
using namespace std;
int main() {
	int N;
	int count = 0;
	bool hey = true;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int len = s.length();
		if (len == 1) {
			count++;
		}
		for (int k = 0; k < len-2; k++) {
			if (s[k] != s[k + 1]) {
				for (int p = k + 2; p < len; p++) {
					if (s[k] == s[p]) {
						hey = false;
					}
				}
			}
		}
		if (hey == true && len != 1)
			count++;
		hey = true;
	}
	cout << count;
}