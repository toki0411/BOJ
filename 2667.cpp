#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[26][26];
vector<int> arr;
int c;
bool dfs(int x, int y) {
	if (x <= -1 || y <= -1)return false;
	if (graph[x][y] == 1) {   //1Àº ¶¥, 0Àº ¹Ù´Ù
		graph[x][y] = 0;
		dfs(x - 1, y);  //ÁÂ
		dfs(x, y - 1);  //ÇÏ
		dfs(x + 1, y);  //¿ì
		dfs(x, y + 1);  //»ó
		c++;
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	char a;
	int result=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			cin >> a;
			int num = a - '0';
			graph[i][k] = num;
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			if (dfs(i, k)) {
				arr.push_back(c);
				
				c = 0;
				result++;
			}
		}
	}
	sort(arr.begin(), arr.end());
	cout << result << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i]<<endl;
	}
	
}