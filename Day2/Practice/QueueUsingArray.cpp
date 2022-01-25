#include <iostream>
using namespace std;
int queue[100];
int n=100,front=- 1,rear=- 1;
void insert(){ //Inserting element from back
   int val;
   if(rear==n-1)
      cout<<"Queue Overflow"<<endl;
   else{
      if(front==- 1)
      front=0;
      cout<<"Insert the Element in Queue: "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void deleteele(){//Deleting element from front
   if(front==-1||front>rear){
      cout<<"Queue Underflow";
   }
   else{
      cout<<"Element deleted from queue is : "<< queue[front]<<endl;
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
      cout<<"Enter 1. Insert 2. Delete 3. Display 4. Exit"<<endl;
      cin>>ch;
      if(ch==1)
      {
         insert();
      }
      else if(ch==2)
      {
         deleteele();
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