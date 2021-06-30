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
	sort(first.begin(), first.end()); //����

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		second.push_back(a);
	}
	
	
	for (int i = 0; i < M; i++) {	//����Ž��
		int start = 0;
		int end = N - 1;
		int target = second[i];

		while (start <= end) {
			int mid = (start + end) / 2;
			if (target == first[mid]) { //ã�� ���� �߾Ӱ��̸� ���
				cout << 1 << '\n';
				key = true;
				break;
			}
			else if (target > first[mid]) start = mid + 1;	//ã�� ���� �߾Ӱ� ���� �� Ŭ�� ������ Ž��
			else end = mid - 1;	//ã�� ���� �߾� �� ���� ���� �� ���� Ž��
		}
		if (key == false) // ã�� ���� ������ 
			cout << 0 << '\n';
		key = false;
	}
	return 0;
}