//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i=1;i<N;i++){
        int cnt = 0;
        cnt +=i;
        string k = to_string(i);
        for(int l=0;l<k.length();l++){
            cnt += k[l]-'0';
        }
        if(cnt == N){cout<<i; return 0;}
    }
    cout<<0;
}

