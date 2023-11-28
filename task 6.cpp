/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = arr[0];
    int mxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= mx) {
            mx = arr[i];
            mxIndex = i;
        }
    }

    int last = arr[n - 1];
    arr[n - 1] = mx;
    arr[mxIndex] = last;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}