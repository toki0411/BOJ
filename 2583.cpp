#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[100][100] ;
int M, N;
vector <int> arr;
int ca;
bool dfs(int x, int y) {  //dfs 선언 재귀함수 사용 
	if (x <= -1 || y <= -1 || x >= N || y >= M) { return false; }  //0,0부터 시작하기때문에 0보다 작으면 return false
	if (graph[x][y] == 0) {    //* 여기 틀린거 같음 
		graph[x][y] = 1;		//*여기도 틀린듯 ㅜ
		dfs(x - 1, y);  //좌 
		dfs(x, y - 1);  //하
		dfs(x + 1, y);  //우
		dfs(x, y + 1);  //상
		ca++;  //영역체크 (크기)
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int  K;
	int a, b, c, d;
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++) {
		cin >> a >> b >> c >> d;
		for (int k = a; k < c; k++) {
			for (int q = b; q < d; q++) {
				graph[k][q] = 1;				//그래프 입력
			}
		}
	}
	int result = 0;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < M; k++) {
			if (dfs(i, k)) {
				arr.push_back(ca);       //arr에 c(크기)
				ca = 0;
				result++;
			}
		}
	}
	sort(arr.begin(), arr.end());
	cout << result << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i]<<' ';
	}
}