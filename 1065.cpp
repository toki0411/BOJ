//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool arr[1001];
vector <int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int cnt = 0;
    int dif;
    for(int i=1;i<=1000;i++){
        v.clear();
        string s = to_string(i);
        if(s.length()==1){arr[i]=true;}
        else{
            for(int k = 0;k<s.length()-1;k++){
                dif = (s[k]-'0')-(s[k+1]-'0');
                v.push_back(dif);
            }
            v.erase(unique(v.begin(),v.end()),v.end());
            if(v.size()==1){arr[i]=true;}
        }
    }
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(arr[i]==true){
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    
}

