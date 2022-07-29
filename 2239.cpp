//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[10][10];
int N;
vector<pair<int, int>> p;

bool check(pair<int,int>&p) {
    int x = p.first;
    int y = p.second;
    for(int i=0;i<9;i++){
        if(arr[x][i]==arr[x][y]&&i!=y)return false;
        if(arr[i][y]==arr[x][y]&&i!=x)return false;
    }
    
    int nx = x/3 * 3;
    int ny = y/3 * 3;
    for(int i=nx;i<nx+3;i++){
        for(int k=ny;k<ny+3;k++){
            if(arr[i][k]==arr[x][y]&&i!=x&&k!=y)return false;
        }
    }
    return true;
}
void Sudoku(int num){
    if(num == N){ //하나의 경우의 수 충족
        for(int k=0;k<9;k++){
            for(int i=0;i<9;i++){
                cout<< arr[k][i];
            }
            cout<<'\n';
        }
        exit(0);
    }
    int x = p[num].first;
    int y = p[num].second;
    for(int i=1;i<=9;i++){
        arr[x][y]=i;
        if(check(p[num])){
            Sudoku(num+1);
        }
        arr[x][y]=0;
    }  //for문 끝
    //return;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    for(int k=0;k<9;k++){
        cin >> str;
        for(int i=0;i<9;i++){
            arr[k][i] = str[i]-'0';
            if(arr[k][i]==0){
                N++;
                p.push_back({k,i});
                
            }
        }
    }
    
    Sudoku(0);
    
}

