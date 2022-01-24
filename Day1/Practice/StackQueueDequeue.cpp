#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s; //Stack
	s.push(10);
	s.push(4);
	s.push(2);
	s.push(14);
	s.push(32);
	s.push(42);
	int temp=s.top();
	cout<<"Top of the Stack: "<<temp<<endl;
	s.pop();
	s.pop();
	s.pop();
	temp=s.top();
	cout<<"Top of the Stack: "<<temp<<endl;
	cout<<"Size of Stack: "<<s.size()<<endl;

	queue<int> q; //Queue
	q.push(42);
	q.push(31);
	q.push(99);
	q.push(1);
	q.push(7);
	q.push(10);
	int temp1=q.front();
	cout<<"front of the Queue: "<<temp1<<endl;
	int temp2=q.back();
	cout<<"Back of the Queue: "<<temp2<<endl;
	q.pop();
	q.pop();
	temp1=q.front();
	cout<<"front of the Queue: "<<temp1<<endl;
	temp2=q.back();
	cout<<"Back of the Queue: "<<temp2<<endl;

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(30);
	d.push_front(40);
	int temp3=d.front();
	cout<<"front of the DeQueue: "<<temp3<<endl;
	int temp4=d.back();
	cout<<"Back of the DeQueue: "<<temp4<<endl;
	d.pop_back();
	d.pop_front();
	temp3=d.front();
	cout<<"front of the DeQueue: "<<temp3<<endl;
	temp4=d.back();
	cout<<"Back of the DeQueue: "<<temp4<<endl;
	return 0;
}