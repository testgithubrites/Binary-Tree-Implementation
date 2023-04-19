//Binary Tree Implementation
#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *right,*left; 
};
struct node* create()
{
 int x;
  struct node *newnode;
   newnode = new node();
  cout<<"\n Enter data(-1 for no node):";
  cin>>x;
  if(x==-1)
  {
   return 0;
  }
  newnode->data=x;
  cout<<"\n Enter left child for"<<x<<endl;
  newnode->left = create();
  cout<<"\n Enter right child for"<<x<<endl;
  newnode->right = create();
  return newnode;
}
int main()
{
   struct node *root;
   root=NULL;
   root = create();
return 0;
}