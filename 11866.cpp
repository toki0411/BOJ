//
//  Copyright (c) 2023 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int n,k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>> n>> k;
    queue <int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int cnt = 0;
    vector<int> ans;
    while(!q.empty()){
        cnt++;
        int a = q.front();
        if(cnt == k){
            q.pop();
            cnt = 0;
            ans.push_back(a);
        }
        else {
            q.pop();
            q.push(a);
        }
    }
    cout<<"<";
    for(int i=0;i<n-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[n-1]<<">"<<endl;
}

