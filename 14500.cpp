//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[501][501];
int n,m;
int blue(int max){
    int val = 0;
    for(int i=0;i<n;i++){ //긴 일자형
        for(int j=0;j<m-3;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]){
                val = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3];
            }
        }
    }
    for(int i=0;i<n-3;i++){  //세로 일자형
        for(int j=0;j<m;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j]){
                val = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j];
            }
        }
    }
    if(val > max) max = val;
    return max;
}
int yellow(int max){
    int val = 0;
    for(int i=0;i<n-1;i++){ //정사각형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]){
                val = arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            }
        }
    }
    if(val > max) max = val;
    return max;
}
int orange(int max){
    int val = 0;
    for(int i=0;i<n-2;i++){ //ㄴ 모양
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1]){
                val = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
            }
        }
    }
    for(int i=0;i<n-1;i++){  //
        for(int j=0;j<m-2;j++){
            //cout<<arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i][j+2]<<endl;
            if(val < arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i][j+2]){
                val = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i][j+2];
            }
        }
    }
//    cout<<val<<endl;
    for(int i=0;i<n-2;i++){  //기역자형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]){
                val = arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            }
        }
    }
    for(int i=1;i<n;i++){  //
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i-1][j+2]){
                val = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i-1][j+2];
            }
        }
    }
    //
    for(int i=0;i<n-2;i++){  //
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j]){
                val = arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j];
            }
        }
    }
    for(int i=0;i<n-1;i++){  //ㄴ형
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]){
                val = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
            }
        }
    }
    for(int i=0;i<n-2;i++){  //
        for(int j=1;j<m;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j-1]){
                val = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j-1];
            }
        }
    }
    for(int i=0;i<n-1;i++){  //
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2]){
                val = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2];
            }
        }
    }
    //
    if(val > max) max = val;
    return max;
}
int green(int max){
    int val = 0;
    for(int i=0;i<n-2;i++){ //긴 일자형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1]){
                val = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1];
            }
        }
    }
    for(int i=1;i<n;i++){  //세로 일자형
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i-1][j+1]+arr[i-1][j+2]){
                val = arr[i][j]+arr[i][j+1]+arr[i-1][j+1]+arr[i-1][j+2];
            }
        }
    }
    //
    for(int i=1;i<n-1;i++){ //긴 일자형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j+1]){
                val = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j+1];
            }
        }
    }
    for(int i=0;i<n-1;i++){  //세로 일자형
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2]){
                val = arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2];
            }
        }
    }
    //
    if(val > max) max = val;
    return max;
}
int pink(int max){
    int val = 0;
    for(int i=0;i<n-1;i++){ // ㅜ 형
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]){
                val = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
            }
        }
    }
    for(int i=1;i<n-1;i++){ // ㅓ 형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i][j+1]+arr[i-1][j+1]+arr[i+1][j+1]){
                val = arr[i][j]+arr[i][j+1]+arr[i-1][j+1]+arr[i+1][j+1];
            }
        }
    }
    for(int i=1;i<n;i++){ // ㅗ 형
        for(int j=0;j<m-2;j++){
            if(val < arr[i][j]+arr[i-1][j+1]+arr[i][j+1]+arr[i][j+2]){
                val = arr[i][j]+arr[i-1][j+1]+arr[i][j+1]+arr[i][j+2];
            }
        }
    }
    for(int i=0;i<n-2;i++){  // ㅏ 형
        for(int j=0;j<m-1;j++){
            if(val < arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j]){
                val = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j];
            }
        }
    }
    if(val > max) max = val;
    return max;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cin>>arr[i][k];
        }
    }
    int max = 0;
    max = blue(max);
    max = yellow(max);
    max = orange(max);
    max = green(max);
    max = pink(max);
    cout<<max<<'\n';
    
}


