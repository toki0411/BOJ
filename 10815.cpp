#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int>& arr, int target, int start, int end) {
	while (start <= end) {
		int mid = (start + end) / 2;
		// ã�� ��� �߰��� �ε��� ��ȯ
		if (arr[mid] == target) return mid;
		// �߰����� ������ ã���� �ϴ� ���� ���� ��� ���� Ȯ��
		else if (arr[mid] > target) end = mid - 1;
		// �߰����� ������ ã���� �ϴ� ���� ū ��� ������ Ȯ��
		else start = mid + 1;
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M,a;
	vector<int> sk;
	vector<int> card;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		sk.push_back(a);
	}
	sort(sk.begin(), sk.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		card.push_back(a);
	}
	
	
	for (int i = 0; i < M; i++) {
		int re = binarySearch(sk, card[i], 0, N);
		if (re != -1)
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}
}