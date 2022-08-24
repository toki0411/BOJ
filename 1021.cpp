//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
deque<int> dq;
int ans=0;
int N, M;
void getMin(int idx){
    if(dq.size()==1)return;
    for (int i=0;i<dq.size();i++){
        if(idx == dq.at(i)){
            idx = i;
            break;
        }
    }
    if(idx <= dq.size()/2){  //찾으려는 원소가 중간보다 앞
        for(int i=0;i<idx;i++){
            dq.push_back(dq.front());
            dq.pop_front();
            ans++;
        }
        dq.pop_front();
        return;
    }
    else {  //찾으려는 원소가 중간보다 뒤
        for(int i=0;i<dq.size()-idx;i++){
            dq.push_front(dq.back());
            dq.pop_back();
            ans++;
        }
        dq.pop_front();
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> N >> M;
    for(int i=1;i<=N;i++){
        dq.push_back(i);
    }
    for(int i=0;i<M;i++){
        cin >> a;
        getMin(a);
    }
    cout<<ans<<'\n';
}
