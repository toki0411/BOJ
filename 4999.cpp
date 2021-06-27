#include <iostream>
using namespace std;
int main() {
	string j;
	string d;
	cin >> j;
	cin >> d;
	if (j.length() >= d.length())
		cout << "go";
	else
		cout << "no";
}