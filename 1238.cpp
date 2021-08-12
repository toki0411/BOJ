#include <bits/stdc++.h>
#define INF 1e9 // ������ �ǹ��ϴ� ������ 10���� ����

using namespace std;

// ����� ����(N), ������ ����(M), ���� ��� ��ȣ(Start)
// ����� ������ �ִ� 100,000����� ����
int n, m, start;
// �� ��忡 ����Ǿ� �ִ� ��忡 ���� ������ ��� �迭
vector<pair<int, int> > graph[100001];
// �ִ� �Ÿ� ���̺� �����
int d[10001];


void dijkstra(int start) {
    priority_queue<pair<int, int> > pq;
    // ���� ���� ���� ���� �ִ� ��δ� 0���� �����Ͽ�, ť�� ����
    pq.push({ 0, start });
    d[start] = 0;
    while (!pq.empty()) { // ť�� ������� �ʴٸ�
        // ���� �ִ� �Ÿ��� ª�� ��忡 ���� ���� ������
        int dist = -pq.top().first; // ���� �������� ��� 
        int now = pq.top().second; // ���� ���
        pq.pop();
        // ���� ��尡 �̹� ó���� ���� �ִ� ����� ����
        if (d[now] < dist) continue;
        // ���� ���� ����� �ٸ� ������ ������ Ȯ��
        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            // ���� ��带 ���ļ�, �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���
            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main(void) {
    cin >> n >> m >> start;

    // ��� ���� ������ �Է¹ޱ�
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        // a�� ��忡�� b�� ���� ���� ����� c��� �ǹ�
        graph[a].push_back({ b, c });
    }
     
    // �ִ� �Ÿ� ���̺��� ��� �������� �ʱ�ȭ
    fill(d, d + 10001, INF);

    // ���ͽ�Ʈ�� �˰����� ����
    dijkstra(start);
    int arr[10001] = { 0, };
    for (int i = 1; i <= n; i++) {
        arr[i] = d[i];
    }
    //���ͽ�Ʈ�� �˰����� �� ����
    for (int i = 1; i <= n; i++) {
        fill(d, d + 10001, INF);
        dijkstra(i);
        arr[i] += d[start];
    }
    int max = arr[start];
    for (int i = 1; i <= n; i++) {
        if (arr[i] > max)max = arr[i];
    }
    cout << max << "\n";
    
}