#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int arr[6] = { 500,100,50,10,5,1 };
	int n;
	int c = 0;
	cin >> n;
	int N = 1000 - n;
	for (int i = 0; i < 6; i++) {
		if (N == 0) break;
		c += (N / arr[i]);
		N = N% arr[i];
	}
	cout << c;
}