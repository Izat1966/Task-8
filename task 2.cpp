/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
bool issame (int a, int b) {
    if (a>0 and b>0) return true;
    if (a<0 and b<0) return true;
    return false;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=1;i<n; i++) {
        if (issame (arr[i-1], arr[i])) {
            cout <<arr[i-1]<<" "<<arr[i]<<"\n";
        }
    }
    return 0;
}