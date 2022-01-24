#include<bits/stdc++.h>
using namespace std;
int main()
{
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
	for(int i=0;i<n/2;i++)
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
	return 0;
}