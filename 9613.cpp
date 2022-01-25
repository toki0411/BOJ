//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;}
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    int arr[101]={0,};
    int GCD[101]={0,};
    int n;
    cin >> t;
    while(t--){
        long long int cnt =0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        for(int i=0;i<n;i++){
            for(int k=i+1;k<n;k++){
                cnt+=gcd(arr[i],arr[k]);
                
            }
        }
        
        cout<< cnt<<endl;
        
        fill_n(arr,101,0);
         //배열초기화
        fill_n(GCD,101,0);
    }
}

