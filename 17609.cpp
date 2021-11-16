
//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int T;
string s;

bool palindrome(string s){
    int len = s.length()-1;
    bool idx = true;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[len-i])idx= false;
    }
    return idx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--){
        cin>>s;
        if(palindrome(s)){cout<<0<<'\n';continue;}
        string str1;
        string str2;
        bool key = false;
        bool check = false;
        for(int i=0;i<s.length()/2;i++){
            int len = s.length()-1;
            if(s[i]!=s[len-i]&&!check){
                //cout<<s[len-i];
                check = true;
                string v=s;
                string vv=s;
                v.erase(i,1);//out<<v<<endl;
                int lenn=vv.length()-1-i;
               // cout<<vv.length()<<' '<<lenn<<' ';
                vv.erase(lenn,1);
              //  cout<<vv;
                if(palindrome(v)){key = true;break;}
                if(palindrome(vv)){key = true;break;}
            }
            else if(s[i]!=s[len-i]&&check){break;}
        }
        
        
        if(key){cout<<1<<'\n';}
        else if(!key)cout<<2<<'\n';
        
    }
}
