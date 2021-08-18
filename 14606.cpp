#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	int result=0; 
	if (N == 1) { cout << 0; exit(0); }//예외처리 
	arr.push_back(N);
	while (arr.size() != 0) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] < 2) { arr.erase(arr.begin() + i); continue; }
			if (arr[i] % 2 == 0) { //짝수이면 
				int mid = arr[i] / 2;
				result += mid * mid;
				arr.erase(arr.begin() + i);
				arr.push_back(mid);
				arr.push_back(mid);
			}

			else {  //홀수이면
				int first = arr[i] / 2;
				int second = arr[i] / 2 + 1;
				result += first * second;
				arr.erase(arr.begin() + i);
				arr.push_back(first);
				arr.push_back(second);
			}

		}
	}
	
	cout << result;
}