#include <stdlib.h>

#include <iostream>
using namespace std;
struct Node {
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node** headr, int data){
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data=data; //Make New node as a Primary Head of LinkedList
  newnode->next=*headr;
  *headr=newnode;
}

void insertAfter(struct Node** headr, int data,int pos){
  struct Node* temp=*headr;
  while(pos--) //Insert element after specific Position
  {
    temp=temp->next;
  }
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
  newnode->data=data;
  newnode->next=temp->next;
  temp->next=newnode;
}

void insertAtEnd(struct Node** headr, int data){ //Inserting element at the end of the LinkedList
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
  struct Node* last=*headr;
  newnode->data=data;
  newnode->next=NULL;
  if(*headr==NULL) { //Checking whether the linkedlist is empty or not
    *headr=newnode;
    return;
  }

  while(last->next!=NULL) //Traverse to the End of the linkedlist
    last=last->next;

  last->next=newnode;
  return;
}

void deleteNode(struct Node** headr, int key){
  struct Node *temp=*headr, *prev;

  if(temp!=NULL && temp->data==key){ //First element will be deleted
  *headr=temp->next;
  free(temp);
  return;
  }
  while (temp!=NULL && temp->data!=key){//Intermidiate of Last elemenet will be deleted
  prev=temp;
  temp=temp->next;
  }

  if(temp==NULL)
    return;
  prev->next=temp->next;
  free(temp);
}

void printList(struct Node* node){ //Printing LinkedList
  while(node!=NULL){
  cout<<node->data<<" ";
  node=node->next;
  }
  cout<<endl;
}

// Driver program
int main() {
  struct Node* head = NULL;
  insertAtEnd(&head, 3);
  insertAtBeginning(&head, 10);
  insertAtBeginning(&head, 42);
  insertAtBeginning(&head, 19);
  insertAtEnd(&head, 99);
  insertAfter(&head, 21, 2);
  insertAfter(&head, 88, 3);
  cout << "Linked list: ";
  printList(head);
  int tempn;
  cout<<"Enter Element value to Delete: ";
  cin>>tempn;
  cout << "\nAfter Deleting an Element: ";
  deleteNode(&head, tempn);
  printList(head);
}