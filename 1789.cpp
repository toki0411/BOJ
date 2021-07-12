#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int s;
    cin >> s;
    int i = 0;
    long long int sum = 0;
    while (true) {
        i++;
        sum += i;
        if (sum > s)break;
        
    }
    cout << i - 1;
}