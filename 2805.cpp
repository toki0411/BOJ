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
    // ���� Ž���� ���� �������� ���� ����
    int start = 0;
    int end = 1e9;
    // ���� Ž�� ���� (�ݺ���) 
    int result = 0;
    while (start <= end) {
        long long int total = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++) {
            // �߶��� ���� ���� �� ���
            if (tt[i] > mid) total += tt[i] - mid;
        }
        if (total < M) { // ���� ���� ������ ��� �� ���� �ڸ���(���� �κ� Ž��)
            end = mid - 1;
        }
        else { // ���� ���� ����� ��� �� �ڸ���(������ �κ� Ž��)
            result = mid; // �ִ��� �� �߶��� ���� �����̹Ƿ�, ���⿡�� result�� ��� 
            start = mid + 1;
        }
    }
    cout << result << '\n';
}

