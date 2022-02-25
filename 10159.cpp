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
    cin >> n>>m;  //노드와 간선 입력받기
    for(int i=0;i<m;i++){   //비용입력
        cin >>a>>b;
        graph[a][b]=1;
    }
    
    for(int k=1;k<=n;k++){  //플로이드 와샬 알고리즘 수행. 시간복잡도는 O(N^3)
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(graph[i][k]==1&&graph[k][j]==1)graph[i][j]=1;
            }
        }
    }
    for (int a = 1; a <= n; a++) {
        int cnt = 0;
        for (int b = 1; b <= n; b++) {
            if(a==b)continue;
            if (graph[a][b] == 0&&graph[b][a]==0) {
                   cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}
