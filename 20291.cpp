//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> ext;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        string b;
        bool key =false;
        for(int k=0;k<s.length();k++){
            if(s[k]=='.'){key = true;continue;}
            if(key)b+=s[k];
        }
        ext.push_back(b);
        
    }
        sort(ext.begin(),ext.end());
        int cnt[50001];
        int q=0;
        int p=0;
        for(int k=0;k<ext.size();k++){
            if(ext[k]==ext[k+1]){p++;}
            else{cnt[q]=p+1;p=0;q++;}
        }
    ext.erase(unique(ext.begin(),ext.end()),ext.end());
    for(int i=0; i<ext.size(); i++){
        cout<< ext[i]<<' '<<cnt[i]<<endl;
    }
}
