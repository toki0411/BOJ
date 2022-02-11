//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
int N,M;
int arr[9];
bool visited[9];
using namespace std;
void dfs(int num , int cnt){
    if(cnt==M){
        for(int i=0;i<M;i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=num;i<=N;i++){
        if(!visited[i]){
            visited[i]=true;
            arr[cnt]=i;
            dfs(i+1,cnt+1);
            visited[i]=false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N>>M;
    dfs(1,0);
}

