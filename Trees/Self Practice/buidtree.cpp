#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildtree(Node* root){
    int data;
    cout<<"Enter the data for root node ";
    cin>>data;
    root= new Node(data);
    if(data==-1) return NULL;
    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root;

}

void levelorderTraversal(Node* root){
    //using BFS
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
        } else{
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
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
} 

void buildtreelot(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the data for root node : ";
    cin>>data;
    root=new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter the data for left node"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data for right node"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
}

void reverselevelordertraversal(Node* &root){
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp!=NULL){
            s.push(temp);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
    while(!s.empty()){
        Node* temp=s.top();
        cout<<temp->data;
        s.pop();
    }
    cout<<endl;
}


int main(){
    Node* root=NULL;
    buildtreelot(root);
    levelorderTraversal(root);
    reverselevelordertraversal(root);
    // root=buildtree(root);
    // //1,2,4,-1,-1,-1,3,-1,-1
    // levelorderTraversal(root);
    // inorder(root);
    // levelorderTraversal(root);

    return 0;
}