#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	string str;
	for (int i = 0; i < T; i++) {
		stack<int> S;
		bool key = false;
		cin >> str;
		int len = str.length();
		for (int k = 0; k < len; k++) {
			if (str[k] == '(')S.push(k);
			else if (str[k] == ')')
			{
				if (S.empty()) { key = true; break;  }
				S.pop();
			}
		}

		if (S.empty()&&!key)cout << "Yes" << endl;
		else cout << "No" << endl;
		
	}
}