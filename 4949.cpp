//
//  4949.cpp
//  project2
//
//  Created by 신혜진 on 2021/11/09.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char>s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    while(true){
        int c=0;
        getline(cin,str);
        if(str.length()==1&&str==".")break;
        for(int i = 0;i<str.length();i++){
            if(str[i]=='('||str[i]=='['){
                s.push(str[i]);}
            else if(!s.empty()&&str[i]==')'&&s.top()=='(')s.pop();
            else if(!s.empty()&&str[i]==']'&&s.top()=='[')s.pop();
            else if(str[i]==']'||str[i]==')')c++;
        }
        if(s.empty()&&c==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
        while( !s.empty() ) s.pop();
        }
        
        

    }
