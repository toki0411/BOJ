#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int M;
	
	string s;
	
	cin >> M;
	cin.ignore();  //버퍼 비워주기
	for(int q=0;q<M;q++) {
		getline(cin, s);
		int st = 0;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] == ' ') {
				for (int j = i - 1; j >= st; j--) {
					cout << s[j];
				}
					st = i+1;
					cout << " ";
			}
		}
		for (int i = len - 1; i >= st; i--)
			cout << s[i];
		cout << endl;
	}
}