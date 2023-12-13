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
};

    void insertathead(Node* &head, int d){
        //create new node
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    void insertattail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
   Node* Reverselinklist(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
        Node* prev=NULL;
        Node*curr=head;
        Node*forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
   }
    void print(Node* &head){
        Node* temp =head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
int main()
{
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    
    insertathead(head, 12);
    insertathead(head, 15);
    insertathead(head, 17);
    insertathead(head, 21);
    insertattail(tail, 9);
    insertattail(tail, 71);
    print(head);
    head=Reverselinklist(head);
    print(head);
    


 return 0;
}