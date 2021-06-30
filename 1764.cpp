#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int BinarySearch(vector<string> dataArr, int size, string findData) {
	int low = 0, high = size - 1, mid; 
	// high가 low보다 작아진다면 찾으려는 데이터가 데이터 집합에 없다. 
	while (low <= high) { 
		// 중앙값은 low와 high를 더한 값을 2로 나누면 된다.
		mid = (low + high) / 2; 
		// 만약 찾으려는 값이 중앙값보다 작다면 high를 mid - 1로 둔다. 
		if (dataArr[mid] > findData) 
			high = mid - 1; 
		// 만약 찾으려는 값이 중앙값보다 크다면 low를 mid + 1로 둔다. 
		else if (dataArr[mid] < findData) 
			low = mid + 1; 
		// 중앙값과 찾으려는 값이 일치하면 mid를 반환한다.
		else return mid; 
	} 
	// 데이터를 찾지 못하면 -1를 반환한다. 
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