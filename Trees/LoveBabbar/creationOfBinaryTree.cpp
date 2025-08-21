#include<iostream>
#include<queue>
using namespace std;

 class Node{
    public:
    int data;
    Node* left;
    Node * right;
     Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
     }
 };

Node* BuildTree( Node* root){ // this is function in which logic of our tree creation is written and its return type is Node*
   cout<<"Enter the value of data at the root node "<<endl;
   int data;
   cin>>data;
   root = new Node(data);

   if(data==-1){
      return NULL;
   }

   cout<<"Enter the value of data at the left of root node  "<<data<<endl;
   root->left=BuildTree(root->left);
   cout<<"Enter the value of data at the right of root node  "<<data<<endl;
   root->right= BuildTree(root->right);

   return root;
}



int main(){
   Node* root=NULL;

   root= BuildTree(root);
   
   return 0;
}