#include <iostream>
#pragma warning(disable:4996)
using namespace std;
int main() {
    int N = 0;
    int ci = 0;
    bool flag = true;
    string word;

    cin >> N;
    while (N--) {
        cin >> word;
        for (int i = 0; i < word.length() - 2; i++) {
            if (word.length() == 1) {   //�� �����϶��� ������ �׷�üĿ �̹Ƿ� �� �� �ʿ� x
                ci++;
                break;
            }
            if (word[i] != word[i + 1]) {    //ù �ε����� �� ���� �ε����� ���ڰ� �ٸ���
                for (int k = i + 2; k < word.length(); k++) {    //����° �ε��� ���� ������ üũ�� ù��° �ε����� ���� �ܾ �ִ��� üũ
                    if (word[i] == word[k]) {   //���� ���� ���� ���ڰ� �ִٸ� ����� ���� ���̹Ƿ� �׷�üĿ�� �ƴ�.
                        flag = false;
                    }
                }
            }
        }
        if (flag) ci++;  //�׷�üĿ�϶� �����߰� ���ش�.
    }
    cout << ci;
}