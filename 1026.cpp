//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int n; int sum =0;

vector <int>a;
vector<int>b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int r;
    for(int k=0;k<n;k++){
        cin >>r;
        a.push_back(r);
    }
    for(int k=0;k<n;k++){
        cin >>r;
        b.push_back(r);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    
    cout<<sum<<endl;
}
