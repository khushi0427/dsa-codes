#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 4, 8};
    int n = 6;
    int pre[n];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = arr[i] + pre[i - 1];
    }
    for (int i = 0; i < n; i++) {
        if ((pre[i] * 2) == pre[n - 1]) {
            cout << arr[i] << endl;
        }
    }


    return 0;
}
