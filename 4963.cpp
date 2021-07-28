#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[51][51];
bool dfs(int x,int y) {
	if (x <= -1 || y <= -1)return false;
	if(graph[x][y]==1){   //1Àº ¶¥, 0Àº ¹Ù´Ù
		graph[x][y] = 0;
	dfs(x - 1, y);  //ÁÂ
	dfs(x , y-1);  //ÇÏ
	dfs(x + 1, y);  //¿ì
	dfs(x , y+1);  //»ó
	dfs(x - 1, y + 1);
	dfs(x + 1, y + 1);
	dfs(x - 1, y - 1);
	dfs(x + 1, y - 1);
	return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int w, h;
	int q;
	
	while(cin >> w >> h) {
		if (w == 0 && h == 0)break;
		for (int i = 0; i < h; i++) {
			for (int k = 0; k < w; k++) {
				cin >> q;
				graph[i][k] = q;
			}
		}
		int result = 0;
		for (int i = 0; i < h; i++) {
			for (int k = 0; k < w; k++) {
				if (dfs(i, k))result++;
			}
		}
		cout << '*'<<result<<endl;
		graph[51][51] = { 0, };
	}
}