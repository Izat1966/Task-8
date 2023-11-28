/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int previous=0;
    for (int i=1;i<n; i++) {
        if (arr[i-1]<arr[i]) cout<<arr[i]<<" ";
    }
    return 0;
}