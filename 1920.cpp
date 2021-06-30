#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M,a;
	bool key = false;
	vector<int> first;
	vector<int> second;
	cin >> N;
	for(int i=0;i<N;i++) {
		cin >> a;
		first.push_back(a);
	}
	sort(first.begin(), first.end()); //정렬

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		second.push_back(a);
	}
	
	
	for (int i = 0; i < M; i++) {	//이진탐색
		int start = 0;
		int end = N - 1;
		int target = second[i];

		while (start <= end) {
			int mid = (start + end) / 2;
			if (target == first[mid]) { //찾는 값이 중앙값이면 출력
				cout << 1 << '\n';
				key = true;
				break;
			}
			else if (target > first[mid]) start = mid + 1;	//찾는 값이 중앙값 보다 더 클때 오른쪽 탐색
			else end = mid - 1;	//찾는 값이 중앙 값 보다 작을 때 왼쪽 탐색
		}
		if (key == false) // 찾는 값이 없으면 
			cout << 0 << '\n';
		key = false;
	}
	return 0;
}