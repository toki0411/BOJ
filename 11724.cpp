#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[1001][1001];
bool visited[1001];
int N;
int count=0;

bool dfs(int x) {
	if (visited[x] == false) {
		visited[x] = true;
		cout << x <<' ';
		for (int i = 1; i <= N; i++) {
			int y = graph[x][i];
			
			if (!visited[i] && y == 1) {
				dfs(i); 
			}
		}
		return true;
	}
	return false;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	int c = 0;
	for (int i = 1; i <= N; i++)
	{
		if(dfs(i))
		c++;
		
	}
	cout << c;
	
	
}