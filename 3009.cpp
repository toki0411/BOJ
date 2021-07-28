#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[3][2];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x, y;
	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;
	}
	int sx = arr[0][0];
	int sy = arr[0][1];
	int count_x = 0;
	int count_y = 0;
	int xq = 0; int yq = 0;
	for (int i = 0; i < 3; i++) {
		if (arr[i][0] == sx) {
			count_x++;
		}
		else {
			xq = arr[i][0];
		}
		if (arr[i][1] == sy) {
			count_y++;
		}
		else {
			yq = arr[i][1];
		}
	}
	if (count_x == 2) {
		cout << xq << ' ';
	}
	else
		cout << sx<<' ';
	if (count_y == 2) {
		cout << yq;
	}
	else
		cout << sy;

	

}