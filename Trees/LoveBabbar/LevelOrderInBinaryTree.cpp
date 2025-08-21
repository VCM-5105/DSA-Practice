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

Node* BuildTree(Node * root){
    cout<<"Enter the data for each level parent node"<<endl;
    int data;
    cin>>data;
    root= new Node(data);//calling the constructor for default values
  
   if(data==-1){
    return NULL;
   }
   cout<<"Enter the value of data at the left of"<<data<<" parent node"<<"\n";

    root->left=BuildTree(root->left);
    cout<<"Enter the data at right of "<<data<<"parent node"<<endl;
    root->right=BuildTree(root->right);
    return root;
}

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){
            //purana level traverse complete
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<"\t";
            if (temp->left){ //if temp ka left is no null then push temp ka left
        q.push(temp->left);
       } 

       if(temp->right){
        q.push(temp->right);
       }
        }

       

    }
}

int main(){
    Node* root;
    root= BuildTree(root);

    cout<<"\n printing in tree pattern"<<endl;
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    LevelOrderTraversal(root);
    return 0;
}



