#include <bits/stdc++.h>
using namespace std;
int fibonacci(int *dp,int n)
{
	if(n<=1)
		return n;
	int t1,t2;

	if(dp[n-1]!=-1)
		t1=dp[n-1];
	else
		t1=fibonacci(dp,n-1);
	if(dp[n-2]!=-1)
		t2=dp[n-2];
	else
		t2=fibonacci(dp,n-2);
	return dp[n]=t1+t2;
}
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	int dp[n];
	memset(dp,-1, sizeof(dp));
	cout<<fibonacci(dp,n)<<endl;
	return 0;
}