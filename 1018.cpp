//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
char arr[51][51];
int chessboard(int x, int y){
    int cnt = 0;
    int cnt2 = 0;
    
        for(int i=x;i<x+8;i+=2){
            for(int k=y;k<y+8;k+=2){
                if(arr[i][k]!='W')cnt++;
            }
        }
        for(int i=x;i<x+8;i+=2){
            for(int k=y+1;k<y+8;k+=2){
                if(arr[i][k]!='B')cnt++;
            }
        }
        for(int i=x+1;i<x+8;i+=2){
            for(int k=y;k<y+8;k+=2){
                if(arr[i][k]!='B')cnt++;
            }
        }
        for(int i=x+1;i<x+8;i+=2){
            for(int k=y+1;k<y+8;k+=2){
                if(arr[i][k]!='W')cnt++;
            }
        }
    
    
        for(int i=x;i<x+8;i+=2){
            for(int k=y;k<y+8;k+=2){
                if(arr[i][k]!='B')cnt2++;
            }
        }
        for(int i=x;i<x+8;i+=2){
            for(int k=y+1;k<y+8;k+=2){
                if(arr[i][k]!='W')cnt2++;
            }
        }
        for(int i=x+1;i<x+8;i+=2){
            for(int k=y;k<y+8;k+=2){
                if(arr[i][k]!='W'){cnt2++;}
                }
            }
            for(int i=x+1;i<x+8;i+=2){
                for(int k=y+1;k<y+8;k+=2){
                    if(arr[i][k]!='B')cnt2++;
                }
            }
    int result=0;
    cnt < cnt2 ? result= cnt : result= cnt2;
    return result;
}
int N, M;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N>>M;
    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            cin >>arr[i][k];
        }
    }
    int min = 1e9;
    int count;
    bool flag = false;
    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            if(i+8<=N&&k+8<=M){
                count = chessboard(i,k);
                if(count<min){
                    min = count;
                    }
                }
            }
        }
    cout<<min;
}
    
