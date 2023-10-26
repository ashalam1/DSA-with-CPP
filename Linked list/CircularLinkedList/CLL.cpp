#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
   // Deconstructor
   ~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
     cout<<"Memory free for node with data "<<value<<endl;
   }

};

void insertNode(Node* &tail, int element, int d){
    //empty List
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail =newNode;
        newNode->next=newNode;
    }

    else{
         //Non-empty list
         //assuming element is present in the list
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
      cout <<"List is empty please check again"<<endl;
      return;
    }
    else{
        //non-empty list
        //assuming that 'value; is present in the linked list
        Node* prev=tail;
        Node* curr= prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
int main()
{
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,7);
    print(tail);
     insertNode(tail,7,6);
    print(tail);
    insertNode(tail,6,8);
    print(tail);
    insertNode(tail,8,11);
    print(tail);
    insertNode(tail,6,99);
    print(tail);
    deleteNode(tail,11);
    print(tail);
 return 0;
}