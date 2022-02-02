#include <bits/stdc++.h>
using namespace std;
int partition(int *arr,int low,int high)
{
	int randomint=low+rand()%(high-low); //Finding random pivot
	swap(arr[randomint],arr[low]);
	int pivot=arr[low];
	int i=low-1,j=high+1;
	while(true){
		do{ //Increment low pointer if it is less then pivot element
			i++;
		}while(arr[i]<pivot);
		do{ //Decrement high pointer if it is less then pivot element
			j--;
		}while(arr[j]>pivot);
		if(i>=j) // Termination Condition
			return j;
		swap(arr[i],arr[j]);
	}
}
void quickSort(int *arr,int low,int high)
{
	if(low<high){
		int temp=partition(arr,low,high); //Finding random pivot element and sort left and right of it
		quickSort(arr,low,temp); //Call same function for left side of the pivot
		quickSort(arr,temp+1,high); //Call same function for right side of the pivot
	}
}
int main()
{
	int n;
	cout<<"Enter Number of element: "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element "<<i+1<<":";
		cin>>arr[i];
	}
	quickSort(arr,0,n-1);
	cout<<"Sorted Array: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}