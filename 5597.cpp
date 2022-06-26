//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool arr[30];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i=0;i<28;i++){
        int a;
        cin >> a;
        arr[a]=true;
    }
    for(int i=1;i<=30;i++){
        if(!arr[i]){
            cout<<i<<'\n';
        }
    }
    
    
}

