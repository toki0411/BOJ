#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <pair<int,int>> xy;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int a,b;
	for (int i = 0; i < N;i++) {
		cin >> a;
		cin >> b;
		xy.push_back(make_pair(a, b));
		
	}
	sort(xy.begin(), xy.end());
	
	for (int i = 0; i < N; i++) {
		cout << xy[i].first<<' '<<xy[i].second <<"\n";
	}
}