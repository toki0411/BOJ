//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, M;
int arr[8];
bool visited[8];
vector<int> v;
void dfs( int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = v[i];
            dfs(cnt + 1);
            visited[i] = false;
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M;
    int a;
    
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    dfs(0);
}
