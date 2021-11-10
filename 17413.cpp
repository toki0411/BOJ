//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
vector <char> res;
vector<char> rev;
string ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    getline(cin,str);
    bool key = false;
    for(int i=0;i<=str.length();i++){
        if(str[i]=='<'){
            for(int k=rev.size()-1;k>=0;k--){
                res.push_back(rev[k]);
            }
            fill(rev.begin(),rev.end(),'\0');
            res.push_back(str[i]); key = true;
        }
        else if(str[i]=='>'){res.push_back(str[i]); key = false;}
        else if(str[i]==' '&&!key){
            for(int k=rev.size()-1;k>=0;k--){
                res.push_back(rev[k]);
            }
            fill(rev.begin(),rev.end(),'\0');
            res.push_back(str[i]);
        }
        else if(str[i]=='\0'){for(int k=rev.size()-1;k>=0;k--){
            res.push_back(rev[k]);
        }
            break;
        }
        else if(!key){
            rev.push_back(str[i]);
        }
        else if(key){
            res.push_back(str[i]);
        }
    }
    for(int i=0;i<res.size();i++)
    {if(res[i]!='\0')ans+=res[i];}
    cout<<ans<<endl;
}
