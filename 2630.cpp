//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[129][129];
int white;
int blue;
int N;
void divideConquer(int rowStart, int rowEnd, int colStart, int colEnd ){
    //범위
    if((rowEnd-rowStart)<0)return;
    if((colEnd-colStart)<0)return;
    bool flag_0 = false;  //true이면 범위 안에 0이 아닌 다른것이 있는 것
    bool flag_1 = false;  //true이면 범위 안에 1이 아닌 다른것이 있는 것
    
    for(int i=rowStart;i<=rowEnd;i++){
        for(int k=colStart;k<=colEnd;k++){
            if(arr[k][i]!=0){
                flag_0 = true;
                break;
            }
        }
        if(flag_0)break;
    }
    if(!flag_0)white++;
    
    for(int i=rowStart;i<=rowEnd;i++){
        for(int k=colStart;k<=colEnd;k++){
            if(arr[k][i]!=1){
                flag_1 = true;
                break;
            }
        }
        if(flag_1)break;
    }
    if(!flag_1)blue++;
    else if(flag_1==true &&flag_0==true){
        int rowMid=(rowEnd-rowStart)/2 +rowStart ;
        int colMid=(colEnd-colStart)/2 +colStart;
        
        divideConquer(rowStart,rowMid,colStart,colMid);
        divideConquer(rowMid+1,rowEnd,colStart,colMid);
        divideConquer(rowStart,rowMid,colMid+1,colEnd);
        divideConquer(rowMid+1,rowEnd,colMid+1,colEnd);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int k=1;k<=N;k++){
            cin>>arr[i][k];
        }
    }
    divideConquer(1,N,1,N);
    cout<<white<<endl<<blue;
}

