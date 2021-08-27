#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<char> compare;
char number[10] = { '0','1','2','3','4','5','6','7','8','9' };
string abc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	string goal;
	int answer = 0;
	cin >> str >> goal;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		for (int k = 0; k < 52; k++) {
			if (str[i] == abc[k]) {
				compare.push_back(str[i]); break;
			}
		}
	}
	string s(compare.begin(), compare.end());
	if (s.find(goal) != std::string::npos) {
		cout << 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}


}