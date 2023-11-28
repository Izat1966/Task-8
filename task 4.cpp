/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int arr[101];
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int mx=arr[0];
    for(int i=1; i<n; i++) {
        if (arr[i]>mx)
        mx=arr[i];
    }
    int mn=arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i]<mn)
        mn=arr[i];
    }
    cout<<mx-mn;
    return 0;
}