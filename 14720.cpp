#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int milk[3] = { 0,1,2};
	int N;
	cin >> N;
	int k = 0;
	int a;
	int c = 0;  //count 
	//vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == milk[k])
		{
			c++;
			if (k == 2) k = 0;
			else k++;
		}
	}
	cout << c;
}