//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    
    for (unsigned long long int i = 2; i <= 1000000; i++) {
        if (arr[i] == 0) {
        for (unsigned long long int j = i*i; j <= 1000000; j += i) {
            arr[j] = 1;
        }
        }
    }
    while(1){
        cin>>n;
        if(n==0){break;}
        int a=0;
        int b=0;
        for(int i =2;i<=n/2;i++){
            if(arr[n-i]==0&&arr[i]==0){
                    a=i;
                    b=n-i;
                    cout<<n<<" = "<<a<<" + "<<b<<"\n";
                    break;
            }
        }
        if(b==0&&a==0){cout<<"Goldbach's conjecture is wrong."<<"\n";
        }
    }
}
