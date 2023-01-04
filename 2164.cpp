//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>> n;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size()!=1){
        q.pop();
        int card = q.front();
        q.pop();
        q.push(card);
    }
    cout<<q.front();
}
