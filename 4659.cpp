#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

char mo[5] = { 'a','e','i','o','u' };
char ja[21] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z' };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	
	while (cin >> str) {
		int cnt = 0;
		int mo_cnt = 0;
		int ja_cnt = 0;
		bool key = false;
		if (str == "end")break;
		int len = str.length();
		for (int i = 0; i < len; i++) {
			if (str[i] == str[i + 1]) {  //같은 글자가 연속으로 두번 왔는지 체크 
				if (str[i] == 'e' || str[i] == 'o') {}
				else key = true;
			}
			for (int k = 0; k < 5; k++) {  //모음 하나를 반드시 포함하는지 체크 
				if (str[i] == mo[k])cnt++;
			}
		}
		if (cnt < 1) key = true;
		for (int i = 0; i < len; i++) {
			bool sign = false; 
			
			for(int k=0;k<5;k++){
				if (str[i] == mo[k]) { mo_cnt++; ja_cnt = 0; sign = true; break; }
			}
			if (!sign) {
				for (int q = 0; q < 21; q++) {
					if (str[i] == ja[q]) { ja_cnt++; mo_cnt = 0; break; }
				}
			}
			if (mo_cnt >= 3 || ja_cnt >= 3) {
				key = true; break;
			}
		}

		if (key) {
			cout << '<' << str << '>' << " is not acceptable." << '\n';
		}
		else cout << '<' << str << '>' << " is acceptable." << '\n';

	}
}