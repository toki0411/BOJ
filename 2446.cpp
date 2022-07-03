//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int c = 0;
    int q = 2 * n - 1;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < c; k++) {
            cout << ' ';
        }
        for (int k = c; k < q - c; k++) {
            cout << '*';
        }
        
        cout << '\n';
        c++;
    }
    c = n-2;
    for (int i = 0; i < n-1; i++) {
        for (int k = 0; k < c; k++) {
            cout << ' ';
        }
        for (int k = c; k < q - c; k++) {
            cout << '*';
        }
        
        cout << '\n';
        c--;

    }
    
}