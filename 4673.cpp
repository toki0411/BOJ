//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
bool arr[10001];
void selfnumber(int i,int k){
    if(i>10000)return ;
    if(i!=k){arr[i]=true;}
    string s=to_string(i);
    for(int p=0;p<s.length();p++){
        i+=(s[p]-'0');
    }
    selfnumber(i,k);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<=10000;i++){
        selfnumber(i,i);
    }
    for(int i=1;i<=10000;i++){
        if(arr[i]==false){
            cout<<i<<'\n';
        }
    }
}

