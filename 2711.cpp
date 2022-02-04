//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T,n;
    string str;
    cin >> T;
    while(T--){
        cin >> n;
        cin >> str;
        str.erase(n-1,1);
        cout<<str<<endl;
    }
}
