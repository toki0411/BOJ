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
			if (q.empty())cout << -1;
			else cout << q.front()<<endl;
		}
		if (s == "back") {
			if (q.empty())cout << -1<<endl;
			else cout << q.back() << endl;
		}
		if (s == "size") {
			cout << q.size()<<endl;
		}
		if (s == "empty") {
			if (q.empty())cout << 1 << endl;
			else cout << 0 << endl;
		}
		if (s == "pop") {
			if (q.empty())cout << -1 << endl;
			else {
				int x = q.front();
				cout << x << endl;
				q.pop();
			}
		}
	}
}