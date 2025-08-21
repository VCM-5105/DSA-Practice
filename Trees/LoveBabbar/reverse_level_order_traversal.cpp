#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right ;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data for root node"<<endl;
    cin>>data;
    root= new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data at the left "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data at the right of root node"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);// that level is complety got traversed 
            }
        } else{
            cout<<temp->data<<"\t";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void reverseorderTraversal(Node* root){
    queue<Node*>q;
    stack<Node*>s;

    q.push(root);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp!=NULL){
            s.push(temp);
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }

    while(!s.empty()){
        Node* temp=s.top();
        s.pop();
        cout<<temp->data<<"\t";
    }
    cout<<endl;
}

int main(){
    Node* root;
    root= buildTree(root);
    levelOrderTraversal(root);
    cout<<"\n printing in reverse order"<<endl;
    reverseorderTraversal(root);
    return 0;
}
