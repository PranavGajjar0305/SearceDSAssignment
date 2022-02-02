//Here we are using priority queue to implement heap sort.
//In heap sort, we add element and on the top either element will be maximum or minimum.
//In priority queue, highest element will be on the top so if we pop the element everytime the maximum element will be popped out.
//At anytime if we push any element into the priority queue it automatically adjust the elements and put the highest element on the top.
#include <bits/stdc++.h>
using namespace std;
void printpq(priority_queue<int> pq)
{
    while(!pq.empty()){
        cout<<'\t'<<pq.top();
        pq.pop();
    }
    cout<<endl;
}
int main()
{
	int n,temp;
	cout<<"Enter Number of element: "<<endl;
	cin>>n;
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element "<<i+1<<":";
		cin>>temp;
		pq.push(temp);
	}
	cout<<"Sorted Array: "<<endl;
	printpq(pq);
	cout<<"After one pop"<<endl;
	pq.pop();
	printpq(pq);
	return 0;
}