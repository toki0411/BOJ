#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vector<int> mon;
	int N, a;
	int M;
	cin >> N;
	if (N >= 3 && N < 1000000) {
		for (int i = 0; i < N; i++) {
			cin >> a;
			mon.push_back(a);
		}
		sort(mon.begin(), mon.end());
		cin >> M;
        int len = mon.size();
		if (M >= N && M <= 1000000000) {
            int start = 1;
            int end = mon[len - 1];
            // 이진 탐색 수행 (반복적) 
            int result = 0;
            while (start <= end) {
                int total = 0;
                int mid = (start + end) / 2;
                for (int i = 0; i < len; i++) {
                    if ((mon[i] - mid) > 0)
                        total += (int)(mid);
                    else
                        total += mon[i];
                }
                if (total <= M) {
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

	
}