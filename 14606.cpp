#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
priority_queue<int>  pq;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	int result=0; 
	if (N == 1) { cout << 0; exit(0); }//예외처리 
	pq.push(N);
	while (pq.top()!=1){
		int x = pq.top();
		if (x % 2 == 0) { //짝수이면 
			int mid = x / 2;
			result += mid * mid;
			pq.pop();
			pq.push(mid);
			pq.push(mid);
		}
		else {  //홀수이면
			int first = x / 2;
			int second = x / 2 + 1;
			result += first * second;
			pq.pop();
			pq.push(first);
			pq.push(second);
		}
	}
	cout << result;
}