#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

Node* insertIntoBST(Node* root, int d){
              if(root==NULL){
                root=new Node(d);
                return root;
              }
              if(d>root->data){
                root->right=insertIntoBST(root->right,d);
              }
              else{
                root->left=insertIntoBST(root->left,d);
              }
              return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
Node* minValue(Node* root) {
    Node* temp=root;
    
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root) {
    Node* temp=root;
    
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deletefromBST(Node* root,int val){
    if(root==NULL){ //base case
        return root;
    }
           //0 child
    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root->left;
            return temp;
        }
        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root->right;
            return temp;
        }

        if(root->left!=NULL && root->right!=NULL){
            int mini=minValue(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }
    }
    if(root->data<val){
        root->right=deletefromBST(root->right,val);
        return root;
    }

      else{
        root->left=deletefromBST(root->left,val);
        return root;
    }
}
Node* levelOftraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
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

void inordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void preordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root=NULL;
    // 10 8 21 7 27 5 4 3 -1
    cout<<"Enter the data"<<endl;
    takeinput(root);

    cout<<endl<<"level order traversal: "<<endl;
    levelOftraversal(root);

     cout<<endl<<"Inorder traversal is : "<<endl;
    inordertraversal(root);

    cout<<endl<<"preorder traversal is :"<<endl;
    preordertraversal( root);

    cout<<endl<<"posteorder traversal is :"<<endl ;
    postordertraversal( root);
    root=deletefromBST(root,27);

    cout<<endl<<"level order traversal: "<<endl;
    levelOftraversal(root);

     cout<<endl<<"Inorder traversal is : "<<endl;
    inordertraversal(root);

    cout<<endl<<"preorder traversal is :"<<endl;
    preordertraversal( root);

    cout<<endl<<"posteorder traversal is :"<<endl ;
    postordertraversal( root);
 return 0;
}