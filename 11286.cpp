#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//<data tape, container type, 정렬 기준> 내림차순 
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	int N;
	cin >> N;
	int a = 0;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == 0) {
			if (pq.empty())
			{
				cout <<0 << "\n";
			}
			else {
				cout << pq.top().second<<"\n";
				pq.pop();
			}
		}
		else {
			pq.push({ abs(a),a });
		}
	}
}