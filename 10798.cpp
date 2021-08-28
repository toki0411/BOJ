#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string s[5];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		int x = s[i].length();
		if (x > max)max = x;
	}
	for (int i = 0; i < max; i++) {
		for (int k = 0; k < 5; k++) {
			if (s[k].size() > i)cout << s[k][i];
		}
	}
}