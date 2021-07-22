#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vector<int> arr;
	int a, b, c;
	cin >> a >> b >> c;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	sort(arr.begin(), arr.end());
	cout << arr[1];
}