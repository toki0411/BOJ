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
    int E,S;
    int year = 0;
    int M;
    cin >> E>>S>>M;
    while(1){
        if((year - E)%15==0&&(year - S)%28==0&&(year - M)%19==0&&year != 0){cout<<year<<'\n';break;}
        year ++;
    }
    
}

