#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	queue<int> q;
	int N;
	int a;
	cin >> N;
	while (N--) {
		cin >> s;
		if (s == "push") {
			cin >> a;
			q.push(a);
		}
		if (s == "front") {
			if (q.empty())cout << -1<<"\n";
			else cout << q.front()<< "\n";
		}
		if (s == "back") {
			if (q.empty())cout << -1<< "\n";
			else cout << q.back() << "\n";
		}
		if (s == "size") {
			cout << q.size()<< "\n";
		}
		if (s == "empty") {
			if (q.empty())cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		if (s == "pop") {
			if (q.empty())cout << -1 << "\n";
			else {
				int x = q.front();
				cout << x << "\n";
				q.pop();
			}
		}
	}
}