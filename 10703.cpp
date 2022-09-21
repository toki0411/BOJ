//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
char arr[3001][3001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int R,S;
    cin>>R>>S;
    string str;
    for(int i=0;i<R;i++){
        cin>>str;
        for(int k=0;k<str.length();k++){
            arr[i][k]=str[k];
        }
    }
    int min = 1e9;

    for(int i=0;i<S;i++){
        int cnt = 0;
        for(int k=R-1;k>=0;k--){
            if(arr[k][i]=='#'){
                cnt = k;
            }
            else if(arr[k][i]=='X'){
                if(cnt-k-1<min){min = cnt-k-1;}
                break;
            }
        }
        
    }
   
    for(int i=0;i<S;i++){
        for(int k=R-1;k>=0;k--){
            if(arr[k][i]=='X'){
                arr[k+min][i]='X';
                arr[k][i]='.';
            }
        }
    }

    for(int i=0;i<R;i++){
        for(int k=0;k<S;k++){
            cout<<arr[i][k];
        }
        cout<<'\n';
    }
}
