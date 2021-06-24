#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int count = 0;
	int k = 0;
	int length = s.length();
	if (s[0] != ' ')count++;
	for(int i=0;i<length-1;i++){
		if ((s[i] == ' ') && (s[i + 1] != ' ')) {
			count++;
		}
	}
	cout << count;
}