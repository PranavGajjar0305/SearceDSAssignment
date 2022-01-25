#include <iostream>
using namespace std;
int stack[100];
int n=100,top=-1;
void push(int val){//Pushing element in Stack
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else{
      top++;
      stack[top]=val;
   }
}
void pop(){//Poping element in Stack
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"Popped element is: "<< stack[top] <<endl;
      top--;
   }
}
void display() {//Desplay all the elements of Stack
   if(top>=0) {
      cout<<"Stack elements are: ";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch=0, val;
   while(ch!=4) //User Driven Menu
   {
      cout<<"Enter 1. Push 2. Pop 3. Display 4. Exit"<<endl;
      cin>>ch;
      if(ch==1)
      {
         cout<<"Enter element you want to insert: "<<endl;
         cin>>val;
         push(val);
      }
      else if(ch==2)
      {
         pop();
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