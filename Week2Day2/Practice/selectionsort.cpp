//Selection Sort
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		temp=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[temp])
				temp=j;
		swap(arr[temp],arr[i]);
	}
}
int main()
{
	int arr[]={66,332,11,2222,452,11,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout << "Sorted array: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}