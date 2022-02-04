//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int arr[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,M;
    cin >> N>>M;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int max = -1;
    for(int i=0;i<N;i++){
        for(int k=1;k<N;k++){
            for(int p = 2;p<N;p++){
                if(i!=k&&k!=p&&p!=i){
                    int target = arr[i]+arr[k]+arr[p];
                    if(target<=M&&target>max){
                        max = target;
                    }}
            }
        }
    }
    cout<<max;
}
