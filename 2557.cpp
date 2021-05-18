#include <iostream>
#pragma warning(disable:4996)

using namespace std;
int main() {

    int a,b;
    int arr[100001] = { 0, };
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> b;
        arr[i] = b;
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < a; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min << "\n" << max;
}