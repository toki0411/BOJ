#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include<queue>
using namespace std;
bool visited[100001];
int count[100001];
int dx[] = {-1,1,2};
int a;
int bfs(int x) {
	queue<int>q;
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
		// 큐에서 하나의 원소를 뽑아 출력
		int x = q.front();
		q.pop();
		//현재 위치에서 위치 확인
		for (int i = 0; i < 3; i++) {
			int nx = x + dx[i];
			if (i == 2) { nx = x * 2; }
			//영역 안 일 경우
			if (nx<=100000 && nx >= 0 ) {
				if (nx == a )return ::count[x] + 1;
				else if (!visited[nx]) {
					q.push(nx); visited[nx] = true;
					::count[nx] += ::count[x] + 1;
				}
			}
		}
	}
	return 0;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N ;
	cin >> a ;
	if (a == N ) { cout << 0 << endl; exit(0); }
	cout << bfs(N) << endl;
}