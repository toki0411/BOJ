//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

#define INF 1e9

using namespace std;

// 노드의 개수(N), 간선의 개수(M)
// 노드의 개수는 최대 100개
int n, m;
// 2차원 배열(그래프 표현)를 만들기
int graph[101][101];


int main(void) {
    int a,b;
    int c;
    cin >> n>>m;  //노드와 간선 입력받기
    
    for(int i=0;i<101;i++){ //배열 무한으로 초기화
        fill(graph[i],graph[i]+101,INF);
    }
    
    for(int i=1;i<=n;i++){ //자기자신은 비용 0
        for(int k=1;k<=n;k++){
            if(i==k)graph[i][k]=0;
        }
    }
    
    for(int i=0;i<m;i++){   //비용입력
        cin >>a>>b>>c;
        if(c<graph[a][b])
            graph[a][b]=c;
    }
    for(int k=1;k<=n;k++){  //플로이드 와샬 알고리즘 수행. 시간복잡도는 O(N^3)
        for(int a=1;a<=n;a++){
            for(int b=1;b<=n;b++){
                graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b]);  //기존의 비용과 노드 k거쳐 가는 비용을 비교 한 뒤 작은 값을 넣음.
            }
        }
    }
    // 수행된 결과를 출력
       for (int a = 1; a <= n; a++) {
           for (int b = 1; b <= n; b++) {
               // 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
               if (graph[a][b] == INF) {
                   cout << 0<< ' ';
               }
               // 도달할 수 있는 경우 거리를 출력
               else {
                   cout << graph[a][b] << ' ';
               }
           }
           cout << '\n';
       }
    
}
