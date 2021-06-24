#include <iostream>
#pragma warning(disable:4996)
using namespace std;
char str_array[100];
char abc[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int main(void) {
	string str;
	cin >> str;
	int c = 0;
	for (int i = 0; i < size(str); i++) {
		str_array[i] = str[i];
	}
	for (int k = 0; k < size(abc); k++) {
		for (int i = 0; i < size(str); i++) {
			if (str_array[i] == abc[k] && c == 0) {
				cout << i << ' ';
				c++;
			}
			else
				continue;
		}
		if (c == 0) {
			cout << -1 << ' ';
		}
		c = 0;
	}


}