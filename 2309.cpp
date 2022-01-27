//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    int sum = 0;
    for(int i=0;i<9;i++){
        cin >> a;
        arr.push_back(a);
        sum +=a;
    }
//    cout<<endl;
    int d = sum -100;
    for(int i=0;i<9;i++){
        for(int k=i+1;k<9;k++){
            if(arr[i]+arr[k]==d&&i!=k){
                arr.erase(arr.begin() + i);
                arr.erase(arr.begin() + k-1);
                sort(arr.begin(),arr.end());
                for(int i=0;i<7;i++){
                    cout<<arr[i]<<"\n";
                }
            }
        }
    }
}
