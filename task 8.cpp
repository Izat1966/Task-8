/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a;
    int arr[100];
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < a - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
