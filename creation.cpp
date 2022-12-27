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
int main()
{
    node*root=NULL;

    //creating tree
    root=buildTree(root);
}