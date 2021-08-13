#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	priority_queue <int> q;
	int N;
	cin >> N;
	int a = 0;
	while (N--) {
		cin >> a;
		if (a == 0) {
			if (q.empty())
				cout << 0 << "\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(a);
		}
	}
}