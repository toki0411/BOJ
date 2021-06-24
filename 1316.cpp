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
            if (word.length() == 1) {   //한 글자일때는 무조건 그룹체커 이므로 비교 할 필요 x
                ci++;
                break;
            }
            if (word[i] != word[i + 1]) {    //첫 인덱스와 그 다음 인덱스의 문자가 다를때
                for (int k = i + 2; k < word.length(); k++) {    //세번째 인덱스 부터 끝까지 체크해 첫번째 인덱스와 같은 단어가 있는지 체크
                    if (word[i] == word[k]) {   //만약 같은 같은 문자가 있다면 띄워서 나온 것이므로 그룹체커가 아님.
                        flag = false;
                    }
                }
            }
        }
        if (flag) ci++;  //그룹체커일때 갯수추가 해준다.
    }
    cout << ci;
}