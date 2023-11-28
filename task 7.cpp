/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int countgrt = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double totalaverage = static_cast<double>(sum) / n;

    sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > totalaverage) {
            countgrt++;
            sum += arr[i];
        }
    }

    cout << sum << " " << countgrt;
    return 0;
}