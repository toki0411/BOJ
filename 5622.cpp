#include <iostream>
using namespace std;
int dial(char a) {
	if (a == 'A'||a=='B'||a=='C')
		return 2;
	else if (a == 'D'||a=='E'||a== 'F')
		return 3;
	else if (a == 'G'|| a=='H'||a=='I')
		return 4;
	else if (a == 'J'||a== 'K'||a== 'L')
		return 5;
	else if (a == 'M'|| a=='N'||a== 'O')
		return 6;
	else if (a == 'P'||a=='Q'||a== 'R'||a== 'S')
		return 7;
	else if (a == 'T'||a=='U'||a== 'V')
		return 8;
	else if (a == 'W'||a== 'X'||a== 'Y'||a== 'Z')
		return 9;
}

int main() {
	string s;
	cin >> s;
	int sum=0;
	int len = s.length();
	
	for (int i = 0; i < len; i++)
		sum += (dial(s[i])+1);
		
	cout << sum;
}