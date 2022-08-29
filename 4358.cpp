//
//  Copyright (c) 2022 HyeJin Shin All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string, double> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    double cnt = 0;
    while(getline(cin, str)){
        cnt++;
        m[str]+=1;
    }
    cout<<fixed;
    cout.precision(4);
    for (auto iter = m.begin(); iter != m.end(); ++iter){
          cout << iter->first << " "
                      << iter->second / cnt * 100 << "\n";
    }
    
}
