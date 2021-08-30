#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, pair<string,int>>>v;
bool cmp(pair<int, pair<string,int>> a, pair<int, pair<string,int>>b) {  //정렬기준을 직접 선언 
	if (a.first == b.first) { return a.second.second < b.second.second; } //'>'는 둘중에 큰 걸 리턴, '<' 는 둘중에 작은 걸 리턴
	else return a.first < b.first;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int a;
	string str;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> str;
		v.push_back({ a,{str,i} });
	}
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < n; i++) {
		cout << v[i].first <<' '<< v[i].second.first<<"\n";
	}
}