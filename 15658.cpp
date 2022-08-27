//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[12];
int n;
int max_v = -1e9;
int min_v = 1e9;
int op[4];
int num[12];
char ans[12];
vector<string> v;
void check(int result, int cnt, int plus, int minus, int multiply, int divide){
    if(cnt==n){
        max_v = max(max_v, result);
        min_v = min(min_v, result);
        return;
    }
    else {
        if(plus+1 <= op[0]){
            check(result+arr[cnt],cnt+1,plus+1,minus,multiply,divide);
        }
        if(minus+1 <= op[1]){
            check(result-arr[cnt],cnt+1,plus,minus+1,multiply,divide);
        }
        if(multiply+1 <=op[2]){
            check(result*arr[cnt],cnt+1,plus,minus,multiply+1,divide);
        }
        if(divide+1 <= op[3]){
            check(result/arr[cnt],cnt+1,plus,minus,multiply,divide+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    for(int i=0;i<4;i++){
        cin >>op[i];
    }
    check(arr[0],1,0,0,0,0);
    cout<<max_v<<'\n'<<min_v;
}
