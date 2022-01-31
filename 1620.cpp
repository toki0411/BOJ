//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

map<int,string> m1;
map<string,int> m2;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin>>N>>M;
    string s;
    for(int i=1;i<=N;i++){
        cin >> s;
        m1.insert(pair<int, string>(i,s));
        m2.insert(pair<string,int>(s,i));
    }
    for(int i=0;i<M;i++){
        cin >> s;
        int key = isdigit(s[0]);
        if(key){
            cout<<m1[stoi(s)]<<"\n";
        }
        else if(key ==0){
            cout<<m2[s]<<"\n";
        }
    }
}
