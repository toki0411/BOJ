#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	string ts = "CAMBRIDGE";
	int length = str.length();
    for (int k = 0; k < length; k++) {
        bool check = true;
        for (int i = 0; i < 9; i++) {
            if (str[k] == ts[i]) {
                check = false;
            }
        }
        if (check) cout << str[k];
    }
}