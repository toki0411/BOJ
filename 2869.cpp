#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A, B, V;
	int day;
	cin >> A >> B >> V;
	if ((V - A) % (A - B) == 0)
		day = (V - A) / (A - B);
	else
		day = (V - A) / (A - B) + 1;
	cout << day + 1;
}