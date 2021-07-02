#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, M, a;
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
		int l,h = 0;
		l = lower_bound(sk.begin(), sk.end(), card[i]) - sk.begin();
		h = upper_bound(sk.begin(), sk.end(), card[i]) - sk.begin();
	cout << h-l << ' ';
	}
}