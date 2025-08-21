#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* BuildTree(Node* root){
    int data;
    cout<<"Enter the data for the root node"<<endl;
    cin>>data;
    root= new Node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for left node"<<data<<endl;
    root->left= BuildTree(root->left);
    cout<<"Enter the data for right node"<<data<<endl;
    root->right=BuildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){
    //LNR
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    int count_leaf_node=0;
    if(root==NULL){
        return;
        count_leaf_node++;

    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

int main(){
    Node* root;
    root=BuildTree(root);
    cout<<"The level order traversal is "<<endl;
    levelOrderTraversal(root);
    cout<<"The inorder traversal is"<<endl;
    inorder(root);
    cout<<"\nThe preorder traversal is"<<endl;
    preorder(root);
    cout<<"\nThe postorder traversal is"<<endl;
    postorder(root);

    return 0;
}