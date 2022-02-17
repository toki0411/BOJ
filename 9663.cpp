//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int N;
int row[15];
int ans = 0;
bool check(int level){
    for(int i = 0; i < level; i++){
            if(row[i] == row[level] || abs(row[level] - row[i]) == level - i)// 대각선이거나 같은 라인
                return false;}  //차이가 일정하다면 대각선에 있는 것으로 볼 수 있다. 
    return true;
}
void nqueen(int x) {  //dfs 선언 재귀함수 사용
    if(x == N){
        ans++;
        return ;
    }
    else {
        for(int i=0;i<N;i++){
            row[x]= i;
            if(check(x)){  //유효한지 체크 후 퀸 배치 (x는 재귀를 돌았기 때문에 그 다음 행으로(x+1)로 항상 되어있음
                nqueen(x+1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    nqueen(0);
    cout<<ans;
}

