//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;
int arr[13];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    while(1){
        cin >> k;
        if(k==0)break;
        if(v.size()!=0){
            cout<<'\n';
            v.clear();
            arr[13]={0,};
        }
        for(int i=0;i<k;i++){
            cin>>arr[i];
            v.push_back(1);
        }
        for(int i=0;i<6;i++){
            v[i]=0;
        }
        do{
            for(int i=0;i<k;i++){
                if(v[i]==0){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<'\n';
        }
        while(next_permutation(v.begin(),v.end()));
        
    }
}

