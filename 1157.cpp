#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
char abc[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
int main() {
	string s;
	int count = 0;
	int max = 0;
	int max_n = 0;
	bool hey = false;
	int arr[26] = { 0, };
	cin >> s;
	int length = s.length();
	
	for(int i=0;i<length;i++)
		s[i] = toupper(s[i]);      //대문자로 모두 변경
	for (int i = 0; i < length; i++) {      //같은지 비교하고 같으면 count ++, count값을 arr배열에 넣음 
		for (int k = 0; k <26; k++) {
			if (s[i]==abc[k]) {
				arr[k]++;
			}
			
		}
	}
	max = arr[0];
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_n = i;
		}
	}
	
	
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			if (abc[max_n] != abc[i])
				hey = true;
		}
	}
	if (hey == true)
		cout << '?';
	else cout << abc[max_n];
}