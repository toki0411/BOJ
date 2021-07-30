#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[100][100] ;
int M, N;
vector <int> arr;
int ca;
bool dfs(int x, int y) {  //dfs ���� ����Լ� ��� 
	if (x <= -1 || y <= -1 || x >= N || y >= M) { return false; }  //0,0���� �����ϱ⶧���� 0���� ������ return false
	if (graph[x][y] == 0) {    //* ���� Ʋ���� ���� 
		graph[x][y] = 1;		//*���⵵ Ʋ���� ��
		dfs(x - 1, y);  //�� 
		dfs(x, y - 1);  //��
		dfs(x + 1, y);  //��
		dfs(x, y + 1);  //��
		ca++;  //����üũ (ũ��)
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
				graph[k][q] = 1;				//�׷��� �Է�
			}
		}
	}
	int result = 0;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < M; k++) {
			if (dfs(i, k)) {
				arr.push_back(ca);       //arr�� c(ũ��)
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