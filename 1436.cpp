//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int arr[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    
    int p = 666;
    int n = 1;
    while(n<=10000){
        string s = to_string(p);
        if(s.find("666")!=string::npos){
            arr[n]=p;
            n+=1;
        }
        p++;
    }
    cout<<arr[N];
}

