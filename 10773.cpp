#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	stack <int> st;
	int K;
	int a;
	int cnt = 0;
	int sum = 0;
	cin >> K;
	while (K--) {
		cin >> a;
		if (a == 0) {
			st.pop();
			cnt--;
		}
		else {
			st.push(a);
			cnt++;
		}
	}
	for (int i = 0; i < cnt; i++) {
		int x = st.top();
		st.pop();
		sum += x;
	}
	cout << sum;
}