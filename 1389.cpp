//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define INF 1e9
int graph[101][101];
map<int, int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    int a,b;
    cin >> N>>M;
    for(int i=0;i<101;i++){ //배열 무한으로 초기화
        fill(graph[i],graph[i]+101,INF);
    }
    for(int i=1;i<=N;i++){ //자기자신은 비용 0
        for(int k=1;k<=N;k++){
            if(i==k){graph[i][k]=0;}
        }
    }
    
    while(M--){
        cin >> a>>b;
        graph[a][b]=1;
        graph[b][a]=1;
    }
    for(int k=1;k<=N;k++){  //플로이드 와샬 알고리즘 수행. 시간복잡도는 O(N^3)
        for(int a=1;a<=N;a++){
            for(int b=1;b<=N;b++){
                graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b]);  //기존의 비용과 노드 k거쳐 가는 비용을 비교 한 뒤 작은 값을 넣음.
            }
        }
    }
    // 수행된 결과를 출력
    for (int a = 1; a <= N; a++) {
        int sum = 0;
        for (int b = 1; b <= N; b++) {
            // 도달할 수 없는 경우
            if (graph[a][b] == INF) {
                cout<<"*";
            }
            // 도달할 수 있는 경우
            else {
                sum += graph[a][b];
            }
        }
        m.insert({a,sum});

    }
    
    int min=INF;
//    int idx = 0;
//    for(int i=1;i<=N;i++){
//        if(m[i]<min){
//            min = m[i];
//            idx =i;
//        }
//    }
    int ans=0;
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second<min){
            min=it->second;
            ans=it->first;
        }
    }
    cout<<ans;
}

