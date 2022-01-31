//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
map<string,int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    int n;
    string s1,s2;
    cin >> T;
    while(T--){
        m.clear();
        int sum = 1;
        cin >>n;
        for(int i=0;i<n;i++){
            cin>>s1>>s2;
            if(m.count(s2)==0){
                m.insert({s2,1});}
            else m[s2]+=1;
        }
        for(auto it=m.begin(); it!=m.end(); it++){
            sum*=m[it->first]+1;
        }
        cout<<sum -1 <<"\n";
    }
}
