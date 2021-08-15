#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> str[20000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int l = s.length();
		str[l].push_back(s);
	}
	for (int i = 0; i < N; i++) {  //정렬 
		sort(str[i].begin(), str[i].end());
	}
	for (int i = 0; i < N; i++) {  //중복삭제
		str[i].erase(unique(str[i].begin(), str[i].end()), str[i].end());
	}
	for (int i = 0; i < N; i++) {
		int M = str[i].size();
		for (int k = 0; k < M; k++) {
			cout << str[i][k]<<"\n";
		}
	}
}