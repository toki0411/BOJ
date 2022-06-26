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
    string s ;
    cin >> s;
    cout<<s[0];
    for(int i=1;i<s.length()-1;i++){
        if(s[i]=='-'){
            cout<<s[i+1];
        }
    }
}
