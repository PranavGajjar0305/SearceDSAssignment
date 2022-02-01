//Bubble Sort
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)	
		for(j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
}
int main()
{
	int arr[]={32,12,12,44,33,2,99,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	cout<<"Sorted array: \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}