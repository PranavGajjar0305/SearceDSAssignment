#include<bits/stdc++.h>
using namespace std;

struct Node { //Structure for Nodes
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};

void printLinkedList(Node* head) { //Printing Linkedlist
    while(head != NULL) {
        cout<<head->data<<'\n';
        head=head->next;
    }
    return;
}
void insertLinkedList(Node* head,int data) { //Inserting an Element into Linkedlist
    while(head->next != NULL) {
        head=head->next;
    }
    Node *temp = new Node(data);
    head->next=temp;
    return;
}
void deleteLinkedList(Node* head,int data) { //Inserting an Element into Linkedlist
    Node* prev=NULL;
    while(head->next != NULL && head->data!=data) {
        prev=head;
        head=head->next;
    }
    prev->next=head->next;
    return;
}

 int main() {
    int temp;
    Node *head = new Node(8);
    Node *temp1 = new Node(1);
    head->next=temp1;
    Node *temp2 = new Node(23);
    temp1->next=temp2;
    Node *temp3 = new Node(66);
    temp2->next=temp3;
    Node *temp4 = new Node(3);
    temp3->next = temp4;
    temp4->next=NULL;
    cout<<"Printing Linkedlist"<<endl;
    printLinkedList(head);

    cout<<"Enter Element to Insert: ";
    cin>>temp;
    insertLinkedList(head,temp);
    cout<<"Printing Linkedlist"<<endl;
    printLinkedList(head);

    cout<<"Enter Element to Delete: ";
    cin>>temp;
    deleteLinkedList(head,temp);
    cout<<"Printing Linkedlist"<<endl;
    printLinkedList(head);
    return 0;
 }