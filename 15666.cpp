//
//  Copyright (c) 2023 HyeJin Shin All rights reserved.
//중복조합
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 8
int arr[MAX];
int ans[MAX];
int N, M;

void dfs(int cnt, int start){
    if(cnt==M){ //하나의 경우의 수 충족
        for(int i=0;i<cnt;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
        return;  //이전 노드로 돌아감
    }
    else {
        for(int i=start;i<N;i++){
            ans[cnt]=arr[i];
            dfs(cnt+1,i); //그 다음 행 탐색
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>N>>M;
    vector <int> v;
    int a;
    for(int i=0;i<N;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
    }
    N = v.size();
    dfs(0,0);
    
}
