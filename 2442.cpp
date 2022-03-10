//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int s = N-1;
    int e = N-1;
    for(int i=0;i<N;i++){
        for(int k=0;k<s;k++){
            cout<<' ';
        }
        for(int j=s;j<=e;j++){
            cout<<'*';
        }
        s--;
        e++;
        cout<<'\n';
    }
}

