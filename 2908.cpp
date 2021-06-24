#include <iostream>
using namespace std;
#pragma warning(disable:4996
int main() {
	int a, b;
	int ai, bi;
	int answer = 0;
	cin >> a >> b;
	ai = (a % 10) * 100+ (int)((a%100)/10)*10+ (int)(a /100);
	bi = (b % 10) * 100 + (int)((b % 100) / 10) * 10 + (int)(b /100);

	if (ai < bi)
		cout << bi;
	else if (ai > bi)
		cout << ai;
}