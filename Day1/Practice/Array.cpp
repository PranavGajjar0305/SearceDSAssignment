#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Array
	int n;
	cout<<"Enter Length of Array: ";
	cin>>n;
	int a[n];
	int temp;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter No."<<i<<"= ";
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++) //Reversing an Array
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	cout<<"Reversed Order of Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	for(int i=0;i<n-1;i++) //Sorting an Array
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[n-1-i];
				a[n-1-i]=temp;
			}
		}
	}
	cout<<"Sorted an Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	temp=0;
	int pos=-1;
	cout<<"Enter Element to delete: ";
	cin>>temp;
	for(int i=0;i<n;i++) //Finding an Element
	{
		if(temp==a[i])
		{
			pos=i;
			break;
		}
	}
	if(pos!=-1)
	{
		for(int i=pos;i<n-1;i++) //Deleting an Element
		{
			a[i]=a[i+1];
		}
		n--;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		cout<<"Element not Found"<<endl;
	}

	return 0;
}