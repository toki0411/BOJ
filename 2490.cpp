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
    int y = 0;
    for(int i=0;i<3;i++){
        int zero = 0;
        for(int k = 0;k<4;k++){
            cin >>y;
            if(y==0){
                zero++;
            }
        }
        if(zero==4){
            cout<<'D'<<'\n';
        }
        else if(zero ==3){
            cout<<'C'<<'\n';
        }
        else if(zero == 2){
            cout<<'B'<<'\n';
        }
        else if(zero==1){
            cout<<'A'<<'\n';
            
        }
        else {
            cout<<'E'<<'\n';
        }
    }
}

