//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,a;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int max = -1e9;
    bool key;
    if(N%2==0)key = true;
    do{
        int c=0;
        if(key){  //짝수
            for(int i=0;i<N-1;i++){
                c+=abs(v[i]-v[i+1]);
            }
        }
        else {
            for(int i=0;i<N-2;i++){
                c+=abs(v[i]-v[i+1]);
            }
            c+=abs(v[N-1]);
        }
        if( c > max ){
            max = c;
        }
    }
    while(next_permutation(v.begin(),v.end()));
    
    cout<<max;
}

