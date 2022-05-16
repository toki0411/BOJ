//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[14];
int ans[6];

int k;

void lotto(int start, int x){
    if(x==6){
        for(int i=0;i<6;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    else{
        for(int i=start;i<k;i++){
            ans[x]=arr[i];
            lotto(i+1,x+1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1){
        cin >> k;
        if(k==0)break;
        for(int i=0;i<k;i++){
            cin >> arr[i];
        }
        lotto(0,0);
        cout<<'\n';
    }
}

