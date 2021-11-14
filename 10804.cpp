//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[21];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s=0; int e = 0;
    for(int i=1;i<=20;i++)arr[i]=i;
    for(int i=0;i<10;i++){
        cin>>s>>e;
        for(int k=0;k<=(e-s)/2;k++){
            int temp =arr[s+k];
            arr[s+k]=arr[e-k];
            arr[e-k]=temp;
        }
    }
    for(int i=1;i<=20;i++)cout<<arr[i]<<' ';
}
