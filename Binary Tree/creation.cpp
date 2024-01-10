#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
     int data;
     node *left;
     node *right;

     node (int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;;
     }
};
node* buildTree(node *root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting left of "<< data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting right of "<< data<<endl;
    root->right=buildTree(root->right);
    return root;
}
node* levelOftraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
        
        if(!q.empty()){
            q.push(NULL);
         }
       }
       else{
          cout<<temp ->data<<" ";
          if(temp  ->left){
            q.push(temp  ->left);
          }
          if(temp ->right){
            q.push(temp ->right);
          }
    }   
}
}
void inordertraversal(node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void preordertraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postordertraversal(node* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node *root=NULL;

    //creating a tree
    root=buildTree(root);

    cout<<"Printint the level order traversal output "<<endl;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOftraversal(root);
    cout<<"Inorder traversal is : ";
    inordertraversal(root);

    cout<<"preorder traversal is : ";
    preordertraversal( root);

    cout<<"posteorder traversal is : ";
    postordertraversal( root);
    return 0;
}