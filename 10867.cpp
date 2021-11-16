//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int>arr;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int c;
    cin >> n;
    while(n--){
        cin >> c;
        arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<' ';
    
}
