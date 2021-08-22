#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
queue <int> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	int cnt = 1;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << '<';
	while (!q.empty()) {
		if (cnt == K) {
			int x = q.front();
			q.pop(); cnt = 1;
			if (q.empty()) { cout << x << '>'; exit(0); }
			else cout << x << ", ";
		}
		else {
			int x = q.front();
			q.pop();
			q.push(x);
			cnt++;
		}
	}
	
}