//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[11][11];
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            cin >>arr[i][k];
        }
    }
    int min = 1e9;
    bool key ;
    int cnt =0;
    do{
        cnt=0;
        key = false;
        for(int i=0;i<N-1;i++){
            int a = v[i];
            int b = v[i+1];
            if(arr[a][b]==0){key = true;break;}
            cnt += arr[a][b];
        }
        if(!key){
        int a = v[N-1];
        int b = v[0];
        if(arr[a][b]==0)continue;
        cnt+=arr[a][b];
        if(cnt<min){
            min = cnt;
        }
        }
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<min;
    
}

