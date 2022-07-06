//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int ans =0;
int arr[11];
int answer[11];
bool check(int x) {  //유망성 체크
    if(x<3)return true;
    if(answer[x-2]==answer[x-1]&&answer[x-1]==answer[x])return false;
    else return true;
}
void btracking(int x){
    if(x==11){ //하나의 경우의 수 충족
        int cnt = 0;
        for(int i=1;i<=10;i++){
            //cout<<answer[i];
            if(answer[i]==arr[i]){
                
                cnt++;
            }
        }
        if(cnt>=5)ans++;
        return;  //이전 노드로 돌아감
    }
    else {
        for(int i=1;i<=5;i++){
            answer[x]=i;
            if(check(x)){  //유망성을 체크한 뒤
                btracking(x+1);  //그 다음  탐색
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<=10;i++){
        cin >> arr[i];
    }
    btracking(1);
    cout<<ans<<'\n';
}

