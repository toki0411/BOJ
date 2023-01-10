//
//  Copyright (c) 2023 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[21];
int subset[21];
int n, s;
int ans;
void dfs(int x){
    if(x==n){
        int sum = 0;
        for(int i=0;i<x;i++){
            if(subset[i]==1)
                sum += arr[i];
        }
        if(sum==s){ //하나의 경우의 수 충족
            ans++;
//            for(int i=0;i<x;i++){
//                cout<< subset[i];
//            }
//            cout<<endl;
        }
        
    }
    else {
        subset[x]=0;
        dfs(x+1); //그 다음 행 탐색
        subset[x]=1;
        dfs(x+1);
    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n>> s;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    dfs(0);
    if(s==0)cout<<ans-1;
    else cout<<ans;
}

