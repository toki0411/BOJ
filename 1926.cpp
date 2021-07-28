#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[501][501];
int area;
vector<int> areaarr;
bool dfs(int x, int y) {
	if (x <= -1 || y <= -1)return false;
	if (graph[x][y] == 1) {   //1Àº ¶¥, 0Àº ¹Ù´Ù
		graph[x][y] = 0;
		dfs(x - 1, y);  //ÁÂ
		dfs(x, y - 1);  //ÇÏ
		dfs(x + 1, y);  //¿ì
		dfs(x, y + 1);  //»ó
		area++;
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	int a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> a;
			graph[i][k] = a;
		}
	}
	int result = 0;
	bool key = false;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (graph[i][k] == 0) key = false;
			else {
				key = true; break;
			}
		}
		if (key)break;
	}
	if (!key) {
		cout << 0 << endl << 0; 
		exit(0);
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (dfs(i, k)) {
				result++; areaarr.push_back(area);
				area = 0; 
			}
			
		}
	}
	int max = areaarr[0];
	for (int i = 0; i < result; i++) {
		if (max < areaarr[i])
			max = areaarr[i];
	}
	cout << result << endl<<max;
	
	graph[501][501] = { 0, };

}