//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    string upper ="";
    string lower="";
    string p="";
    cin >> s;
    bool check=false;
    vector<char> v;
    sort(s.begin(),s.end());
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    s.erase(unique(s.begin(),s.end()),s.end());
    for(int i=0;i<m.size();i++){
        while(m[s[i]]>=2){
            upper+=s[i];
            lower+=s[i];
            m[s[i]]-=2;
        }
        if(m[s[i]]==1)
            v.push_back(s[i]);
        if(v.size()>=2){cout<<"I'm Sorry Hansoo";check=true;break;}
        
    }
    if(v.size()==1)upper+=v[0];
    for(int i=lower.length()-1;i>=0;i--){
        p+=lower[i];
    }

    string result=upper+p;
    if(!check)cout<<result<<endl;
    else return 0;
}
