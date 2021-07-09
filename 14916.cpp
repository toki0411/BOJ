#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int c = 0;
	cin >> n;
	while (true) {
		if (n < 2)break;
		if ((n % 5 == 0)&&(n%2==0)) {  //10의 배수
			c++;
			n -= 5;
		}
		else if ((n % 5 != 0) && (n % 2 == 0)) {  //2의 배수
			c++;
			n -= 2;
		}
		else if ((n % 5 == 0) && (n % 2 != 0)) { //5의 배수 
			c++;
			n -= 5;
		}
		else if(n>=5){
			n -= 5;
			c ++;
		}
		else if(n>=2) {
			n-= 2;
			c++;
		}
	}
	if (n == 0) 
		cout << c;
	else cout << -1;
}