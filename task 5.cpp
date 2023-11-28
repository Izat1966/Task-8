/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[100];
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int minValueIndex= 0;
	for(int i=1; i < n; i++)
	{
		if(arr[minValueIndex] > arr[i])
		{
			minValueIndex=i;
		}
	}
	
	int last = arr[minValueIndex];
	arr[minValueIndex]= arr[0];
	arr[0] = last;
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
		
}