#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vector<int> tt;
	int N, M;
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a = 0;
		cin >> a;
		tt.push_back(a);
	}
	int len = tt.size();
	sort(tt.begin(), tt.end());
    // 이진 탐색을 위한 시작점과 끝점 설정
    int start = 0;
    int end = 1e9;
    // 이진 탐색 수행 (반복적) 
    int result = 0;
    while (start <= end) {
        long long int total = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++) {
            // 잘랐을 때의 떡의 양 계산
            if (tt[i] > mid) total += tt[i] - mid;
        }
        if (total < M) { // 떡의 양이 부족한 경우 더 많이 자르기(왼쪽 부분 탐색)
            end = mid - 1;
        }
        else { // 떡의 양이 충분한 경우 덜 자르기(오른쪽 부분 탐색)
            result = mid; // 최대한 덜 잘랐을 때가 정답이므로, 여기에서 result에 기록 
            start = mid + 1;
        }
    }
    cout << result << '\n';
}

