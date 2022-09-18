//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[50][50];
vector<int> v;
vector<pair<int,int>> p;  //치킨집 위치
vector<pair<int,int>> lm;
vector<int> a;
void pick(int n, vector<int> &picked, int topick) {
    
    if(topick == 0) {
        for (int i = 0; i < picked.size(); ++i) {
            int a =p[picked[i]].first;
            int b = p[picked[i]].second;
            lm.push_back({a,b});
        }
        lm.push_back({-1,-1});
        return;
    }
    
    int smallest = picked.empty() ? 0 : picked.back() + 1;
    
    for (int j = smallest; j < n; ++j) {
        picked.push_back(j);
        pick(n, picked, topick-1);
        picked.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int sum = 0;
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            cin>>arr[i][k];
            if(arr[i][k]==2){
                p.push_back({i,k});
            }
        }
    }
    pick(p.size(),a,M);
    p.clear();
    for(int i=0;i<lm.size();i++){
        if(lm[i].first==-1&&lm[i].second==-1){
            for(int i=0;i<N;i++){  //한개의 집의 치킨거리를 구함
                for(int k=0;k<N;k++){
                    if(arr[i][k]==1){
                        int min = 1000000;
                        for(int l=0;l<p.size();l++){
                            int a = p[l].first;
                            int b= p[l].second;
                            int len = abs(i-a)+abs(k-b);
                            if(len < min)min=len;
                        }
                        sum += min;
                    }
                }
            }
            v.push_back(sum);
            sum = 0;
            p.clear();
        }
        else {p.push_back({lm[i].first,lm[i].second});}
    }
    sort(v.begin(),v.end());
   
    cout<<v[0];
    
}

