#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int k, n;
	cin >> k >> n;
    if (k <= n) {
        int a;
        vector<int> arr;
        for (int i = 0; i < k; i++) {
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int len = arr.size();
        // 이진 탐색을 위한 시작점과 끝점 설정
        long long int start = 1;
        long long int end = arr[len -1];
        // 이진 탐색 수행 (반복적) 
        int result = 0;
        while (start <= end) {
            int total = 0;
            long long int mid = (start + end) / 2;
            for (int i = 0; i < k; i++) {
                total += (int)(arr[i] / mid);
            }
            if (total >= n) {
                result = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }

        }
        cout << result;
    }
}