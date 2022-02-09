//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>

using namespace std;
int arr[11];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    int a;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4;i<11;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    cin >> T;
    while(T--){
        cin >> a;
        cout<<arr[a]<<'\n';
    }
}

