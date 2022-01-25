//Here we are creating two stack one for the storing and other for fetching maximum value everytime.
//If new element that comes to stack is maximum than current max element than it will be updated and new max will be pushed inside current maxstack.
//If poped element is maximum element than pop element from maxstack too.
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,maxele=INT_MIN,tt;
	cout<<"Enter No of Queries: "<<endl;
	cin>>n;
	stack<int> s,maxstack;
	string stemp;
	for(int i=0;i<n;i++){
		cin>>stemp;
		if(stemp[0]=='1')
		{
			cin>>stemp;
			string ss=stemp.substr(0);
			tt=stoi(ss);
			s.push(tt);
			if(tt>maxele)
			{
				maxstack.push(tt);
				maxele=tt;
			}
		}
		else if(stemp=="2")
		{
			tt=s.top();
			s.pop();
			if(tt==maxele)
			{
				if(!maxstack.empty())
				{
					maxstack.pop();
					if(!maxstack.empty())
						maxele=maxstack.top();
					else
						maxele=INT_MIN;
				}else
				{
					maxele=INT_MIN;
				}
			}
		}
		else if(stemp=="3")
		{
			cout<<maxele<<endl;
		}
	}
	return 0;
}