//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;
vector<int> arr2;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int N;
    cin >> N;
    int a;
    for(int i=0;i<N;i++){
        cin >> a;
        arr.push_back(a);
        arr2.push_back(a);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin() , arr.end() ) , arr.end());
    for(int i=0;i<N;i++){
        cout<<lower_bound(arr.begin(), arr.end(), arr2[i])-arr.begin()<<" ";
    }
    
}

