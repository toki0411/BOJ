#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	stack<int> s = {};
	int N;
	cin >> N;
	string str;
	while (N--) {
		cin >> str;
		if (str=="push") {
			int t;
			cin >> t;
			s.push(t);
		}
		else if (str == "pop") {
			if (s.empty() == 1)cout << -1<<endl;
			else {
				cout << s.top()<<endl;
				s.pop();
			}
		}
		else if(str=="top"){
			if (s.empty() == 1)cout << -1<<endl;
			else cout<<s.top()<<endl;
		}
		else if (str == "size"){
			cout << s.size()<<endl;
			
		}
		else if (str == "empty"){
			
			cout << s.empty()<<endl;
		}
		
	}
}