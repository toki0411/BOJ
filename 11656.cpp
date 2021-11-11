//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    int len = str.length();
    for(int i=0;i<len;i++){
        v.push_back(str);
        str.erase(0,1);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<len;i++){
        cout<<v[i]<<endl;
    }
}
