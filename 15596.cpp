//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a;

long long sum (vector<int> &a){
    long long ans = 0;
    for(int i=0;i<a.size();i++){
        ans += a[i];
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

