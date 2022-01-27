#include <iostream>
using namespace std;
int queue[100];
int n=100,front=-1,rear=-1;
void enqueue(){ //Enqueue element from back
   int val;
   if(rear==n-1)
      cout<<"Queue Overflow"<<endl;
   else{
      if(front==- 1)
      front=0;
      cout<<"Enqueue the Element in Queue: "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void dequeue(){//Dequeue element from front
   if(front==-1||front>rear){
      cout<<"Queue Underflow";
   }
   else{
      cout<<"Element Dequeue from queue is : "<< queue[front]<<endl;
      front++;
   }
}
void display() {//Desplay all the elements of Queue
   if(front==-1)
      cout<<"Queue is empty"<<endl;
   else{
      cout<<"Queue elements are: ";
      for (int i=front;i<=rear;i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main() {
   int ch=0, val;
   while(ch!=4) //User Driven Menu
   {
      cout<<"Enter 1. Enqueue 2. Dequeue 3. Display 4. Exit"<<endl;
      cin>>ch;
      if(ch==1)
      {
         enqueue();
      }
      else if(ch==2)
      {
         dequeue();
      }
      else if(ch==3)
      {
         display();
      }
      else
      {
         break;
      }
   }
   return 0;
}