#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	getline(cin, s);
	int c = 0;
	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
		c++;
		if (c == 10) {
			cout << endl; c = 0;
		}
	}
}