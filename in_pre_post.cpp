#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node*left;
     node*right;

     node(int d)
     {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
     }
};
node* buildTree(node*root)
{
   cout<<"Enter value"<<endl;
   int data;
   cin>>data;
   root=new node(data);

   if(data==-1)
     return NULL;
   cout<<"Enter in left"<<endl;
   root->left=buildTree(root->left);
   cout<<"Enter in right"<<endl;
   root->right=buildTree(root->right);
   return root;

}
void preOrder(node*root)
{   if(root==NULL)
      return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    
}
void inOrder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node*root)
{
    if(root==NULL)
      return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";  
}
int main()
{
    node*root=NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //creating tree
    root=buildTree(root);
    cout<<"PreOrder is"<<endl;
    preOrder(root);
    cout<<endl<<"PostOrder is"<<endl;
    postOrder(root);
    cout<<endl<<"InOrder is"<<endl;
    inOrder(root);


}