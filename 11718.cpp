#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    getline(cin, str);
    while (str != "\0") {
        cout << str<<'\n';
        getline(cin, str);
    }
    return 0;
}