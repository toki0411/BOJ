//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct st{
    string name;
    int k,e,m;
};
bool cmp(st a, st b){
    if(a.k==b.k&&a.e==b.e&&a.m==b.m)return a.name<b.name;
    else if(a.k==b.k&&a.e==b.e)return a.m>b.m;
    else if(a.k==b.k)return a.e<b.e;
    else return a.k>b.k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<st> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].name>>v[i].k>>v[i].e>>v[i].m;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].name<<'\n';
    }
}

