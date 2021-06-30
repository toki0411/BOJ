#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int BinarySearch(vector<string> dataArr, int size, string findData) {
	int low = 0, high = size - 1, mid; 
	// high�� low���� �۾����ٸ� ã������ �����Ͱ� ������ ���տ� ����. 
	while (low <= high) { 
		// �߾Ӱ��� low�� high�� ���� ���� 2�� ������ �ȴ�.
		mid = (low + high) / 2; 
		// ���� ã������ ���� �߾Ӱ����� �۴ٸ� high�� mid - 1�� �д�. 
		if (dataArr[mid] > findData) 
			high = mid - 1; 
		// ���� ã������ ���� �߾Ӱ����� ũ�ٸ� low�� mid + 1�� �д�. 
		else if (dataArr[mid] < findData) 
			low = mid + 1; 
		// �߾Ӱ��� ã������ ���� ��ġ�ϸ� mid�� ��ȯ�Ѵ�.
		else return mid; 
	} 
	// �����͸� ã�� ���ϸ� -1�� ��ȯ�Ѵ�. 
	return -1; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	int ret;
	cin >> N >> M;
	vector<string> hear;
	vector<string> see ;
	vector<string> both;
	while (N--) {
		string s;
		cin >> s;
		hear.push_back(s);
	}
	sort(hear.begin(), hear.end());
	while (M--) {
		string s;
		cin >> s;
		see.push_back(s);
	}
	sort(see.begin(), see.end());
	int len = hear.size();
	int length = see.size();
	for (int k = 0; k < len; k++) {
		ret = BinarySearch(see, length, hear[k]); 
		if (ret != -1) 
			both.push_back(see[ret]);
	}
	cout << both.size()<<'\n';
	for (int j = 0; j < both.size(); j++)
		cout << both[j]<<'\n';
}