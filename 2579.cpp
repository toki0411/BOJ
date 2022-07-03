//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[301];
int d[301];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    d[0] = arr[0];
    d[1] = arr[0]+arr[1];
    for (int i = 2; i < k; i++) {
        d[i] = max(d[i - 2]+arr[i], d[i - 3] + arr[i-1] + arr[i]);
    }
    cout << d[k - 1] << '\n';

}