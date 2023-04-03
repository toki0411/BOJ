//
//  Copyright (c) 2023 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[100001];
string key[100001];
int n,m;
int binary_search(int target){
    int low = 0; int high = n-1; int idx;
    while(low <= high){
        int mid = (low + high) / 2;
            
        //원하는 값을 찾았다면 mid 반환
        if(target <= arr[mid] && target > arr[mid-1])return mid;
        else if(target <= arr[mid] && mid == 0){return mid;} //mid 가 0일 경우 mid-1은 에러나므로 따로처리
            
        if(target ==arr[mid] && target == arr[mid-1])high = mid-1; //같은 값들만 나올 때
        // 원하는 값이 더 작다면 검사 범위를 더 낮게 잡아야 한다.
        if(target < arr[mid]){
            high = mid - 1;
        }
        // 원하는 값이 더 크다면 검사 범위를 더 크게 잡아야 한다.
        else if(target > arr[mid]){
            low = mid + 1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>key[i]>>arr[i];
    }
    int target;
    for(int i=0;i<m;i++){
        cin>>target;
        int idx = binary_search(target);
        cout<<key[idx]<<'\n';
    }
    
}

