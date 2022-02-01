//Insertion Sort
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int *arr, int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
int main()
{
	int arr[]={64,23,11,67,90,11,453,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}