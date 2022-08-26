
//
//  Copyright (c) 2021 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[12];
int n;
int op[4];
int num[12];
char ans[12];
vector<string> v;
void check(int plus ,int minus , int multiply, int divide){
    int cnt = plus+minus+multiply+divide;
    if(cnt==n-1){  //연산자의 개수 == 숫자 -1 (연산자 최대 개수)
        string str;
        for(int i=0;i<cnt;i++){
            str+=ans[i];
        }
        v.push_back(str);  //가능한 모든 연산자들의 조합을 vector v에 넣음
        return;
    }
    else {
        if(plus+1 <= op[0]){  //현재 + 연산자 개수 + 1 <= 입력받은 총 + 연산자 개수 이면, +를 배열에 넣고 다음 경우 탐색
            ans[cnt]='+';
            check(plus+1,minus,multiply,divide);
        }
        if(minus+1 <= op[1]){
            ans[cnt]='-';
            check(plus,minus+1,multiply,divide);
        }
        if(multiply+1 <=op[2]){
            ans[cnt]='*';
            check(plus,minus,multiply+1,divide);
        }
        if(divide+1 <= op[3]){
            ans[cnt]='/';
            check(plus,minus,multiply,divide+1);
        }
    }
}
void value(int a, int b, char c,int cnt){
    if(c == '+'){num[cnt]=a+b;}
    else if(c=='-'){num[cnt]=a-b;}
    else if(c=='*'){num[cnt]=a*b;}
    else if(c=='/'){num[cnt]=a/b;}
    return;
}
void cal(){
    int max = -1000000000;
    int min = 1000000000;
    for(int i=0;i<v.size();i++){
        num[12]={0,};
        for(int k=0;k<n-1;k++){
            char c = v[i][k];  //연산자
            int a,b=0;
            if(k==0){
                a = arr[k];
                b = arr[k+1];
            }
            else {
                a = num[k-1];
                b = arr[k+1];
            }
            value(a,b,c,k);  //첫번째 수, 두번째 수, 연산자, 현재 카운트 변수
        }
        if(num[n-2]>max){
            max = num[n-2];
        }
        if(num[n-2]<min){
            min = num[n-2];
        }
    }
    cout<<max<<'\n'<<min;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>arr[i];  //값들 입력받음
    }
    for(int i=0;i<4;i++){
        cin >>op[i];  //연산자들 입력받음
    }
    check(0,0,0,0); //가능한 모든 연산자들의 조합을 구함
    cal();  //연산자들의 조합을 가지고 최대, 최소값을
}
