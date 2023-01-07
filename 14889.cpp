//
//  Copyright (c) 2023 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int arr[21][21];
int s[21];
bool visited[21];


int minval = 1e8;
void dfs(int x, int start){
    if(x==n/2){ //하나의 경우의 수 충족
        vector<int> l;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                l.push_back(i);
            }
        }
        int val_start = 0;
        int val_link = 0;
        
        for(int i=0;i<x-1;i++){
            for(int k=i+1;k<x;k++){
                val_start += arr[s[i]][s[k]]+arr[s[k]][s[i]];
                val_link += arr[l[i]][l[k]]+arr[l[k]][l[i]];
            }
        }
        
        int val = abs(val_link - val_start);
        if(val < minval)
            minval = val;
        return;  //이전 노드로 돌아감
    }
    else {
        for(int i=start;i<n;i++){
            s[x]=i;
            visited[i]=true;
            
            dfs(x+1,i+1); //그 다음 행 탐색
            
            visited[i]=false;
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin>>arr[i][k];
        }
    }
    dfs(0,0);
    cout<<minval;
}

