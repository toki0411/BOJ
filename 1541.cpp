#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> g;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin >> str;
	bool minus = false;
	int sum = 0;
	int len = str.length();
	string temp = "";
	for (int i = 0; i <= len; i++) {
		if (str[i] == '-' || str[i] == '+' || str[i] ==NULL) {  //연산자이면
			if (minus) {
				sum -= stoi(temp);
			}
			else {
				sum += stoi(temp);
			}
			
			if (str[i] == '-') {
				minus = true;
			}
			temp = "";
			
		}
		else {  //피연산자이면
			temp += str[i];
		}
	}
	cout << sum;


}
