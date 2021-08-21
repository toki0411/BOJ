#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> arr;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	int a, b;
	int count=0;
	int end = 0;
	cin >> N;
	for(int i=0;i<N;i++) {
		cin >> a >> b;
		arr.push_back({ b,a });
	}
	
	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < N; i++) {
		int x = arr[i].second;
		int y =  arr[i].first;
		if (x >= end) { count++; end = y; }
	}
	
	cout << count;

}