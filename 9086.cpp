#include <iostream>
#pragma warning(disable:4996)
using namespace std;
int main() {
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int l = s.length();
		cout << s[0]<< s[l-1] << "\n";
	}

}