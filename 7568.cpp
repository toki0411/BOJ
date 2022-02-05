//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[50][2];
int ans[51];
vector<bool> v[50];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    int p = 0;  //사람수
    cin >> N;
    for (int i = 0; i < N;i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            if(k!=i){
                if ((arr[i][0] >= arr[k][0]) || (arr[i][1] >= arr[k][1])) {
                    v[i].push_back(true);
                }
            }
        }
    }
    int C = N;
    
    for (int i = N-1; i >= 0; i--) {
        p++;
        for (int k = 0; k < N; k++) {
            int a = v[k].size();
            //cout << a << ' ';
            if (a == i) { ans[k] = p;  }
        }
    }
    for (int k = 0; k < N; k++) {
        cout << ans[k] << ' ';
    }
}
