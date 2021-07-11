#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	bool flag=false;
	int N;
	int a;
	vector<int> arr;
	cin >> N;
	int c=0;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	while (flag == false) {
		for (int i = 0; i < N - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				c += arr[i] - arr[i + 1] + 1;
				arr[i] = arr[i + 1] - 1;
			}
			else if (arr[i] == arr[i + 1]) {
				c++;
				arr[i]--;
			}
		}
		for (int i = 0; i < N - 1; i++) {
			int max = arr[N - 1];
			if ((arr[i] < max)&&(arr[i]<arr[i+1]))flag = true;
			else {
				flag = false;
				break;
			}
		}
	}
	cout << c;
}