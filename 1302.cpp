//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map <string,int>m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    string s;
    cin >>N;
    while(N--){
        cin >> s;
        if(m.count(s)==0){
            m.insert({s,1});
        }
        else {
            m[s]+=1;
        }
    } //while
    int max = -1;
    for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second>max){
                max=it->second;
                s=it->first;
            }
        }
    cout<<s;
}
