//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<string,bool> h;
vector<string> v1;
vector<string> v2;

bool arr[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string str;
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>str;
        h.insert(make_pair(str,false));
        v1.push_back(str);
    }
    for(int i=0;i<n;i++){
        cin>>str;
        v2.push_back(str);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(!h[v1[i]]){
            for(int k=0;k<n;k++){
                if(!h[v2[k]]){
                    if(v1[i]==v2[k]){
                        h[v1[i]]=true;
                        break;
                    }
                    else {
                        h[v2[k]]=true; cnt++;
                    }
                }
            }
        }
        
    }
    cout<<cnt;
}

