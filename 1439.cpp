#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	int zero = 0;
	int one = 0;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len ; i++) {
		if ((str[i]=='0')&&(str[i] != str[i + 1])) {
			zero++;
		}
		else if ((str[i] == '1') && (str[i] != str[i + 1])) {
			one++;
		}
	}
	
	if (zero > one)
		cout << one;
	else
		cout << zero;

}