//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    int a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    double sum = v[t-1];
    int cnt =0;
    for(int i=0;i<t-1;i++){
        sum += v[i]/2;
        if(v[i]%2!=0){
            cnt++;
        }
    }
    double k = cnt * 0.5;
    cout<<sum + k ;
}

