//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(true){
        getline(cin,s);
        if(s=="END"){
            break;
        }
        for(int i=s.length()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<"\n";
    }
}

