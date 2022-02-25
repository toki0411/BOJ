//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define INF 1e9
using namespace std;
int graph[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i=0;i<101;i++){ //배열 무한으로 초기화
        fill(graph[i],graph[i]+101,INF);
    }
    int v;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> v;
            if(v==1){
                graph[i][j]=1;
            }
        }
    }
    for(int k=0;k<N;k++){  //플로이드 와샬 알고리즘 수행. 시간복잡도는 O(N^3)
        for(int a=0;a<N;a++){
            for(int b=0;b<N;b++){
                graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b]);  //기존의 비용과 노드 k거쳐 가는 비용을 비교 한 뒤 작은 값을 넣음.
            }
        }
    }

    for (int a = 0; a < N; a++) {
        for (int b = 0; b < N; b++) {
            if (graph[a][b] == INF) {
                cout << 0 << ' ';
            }
            else {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }
}

