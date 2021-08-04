#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		arr.push_back((s[i] - '0'));
	}
	sort(arr.begin(), arr.end());
	for (int i = len - 1; i >= 0; i--) {
		cout << arr[i];
	}

}