//Binary Tree - Inserting simple elements into tree
#include <bits/stdc++.h>
using namespace std;
struct Node{ //Defining structure for node
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
int main()
{
	struct Node* root=new Node(43);
	root->left=new Node(32);
	root->right=new Node(77);
	root->left->left=new Node(35);
	root->left->right=new Node(67);
	root->right->left=new Node(85);
	root->right->right=new Node(32);
	cout<<"Printing root->data: ";
	cout<<root->data<<endl;
	cout<<"Printing root->left: ";
	cout<<root->left->data<<endl;
	cout<<"Printing root->right: ";
	cout<<root->right->data<<endl;
	cout<<"Printing root->left->left: ";
	cout<<root->left->left->data<<endl;
	cout<<"Printing root->left->right: ";
	cout<<root->left->right->data<<endl;
	cout<<"Printing root->right->left: ";
	cout<<root->right->left->data<<endl;
	cout<<"Printing root->right->right: ";
	cout<<root->right->right->data<<endl;
	return 0;
}