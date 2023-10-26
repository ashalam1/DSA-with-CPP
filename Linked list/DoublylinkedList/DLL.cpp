#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    //deconstructor
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int  getlength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
        
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail ,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;

    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
}
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    }
    
}
void insertAtposition(Node* &head, Node* &tail, int position,int d){
    //insert at start
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at end
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    if(temp!=NULL){
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;
    }
}
void deletenode(Node* &head, int position){
    //delete first or starting node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    //delete at any position
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
       curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;
       delete curr;
    }
}
int main()
{
    Node* Node1=new Node(10);
    Node* head=Node1;
    Node* tail=Node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertAtHead(head,tail,12);
    print(head);
    cout<<getlength(head)<<endl;
    insertAtTail(head,tail,17);
    print(head);
    cout<<getlength(head)<<endl;
    insertAtposition(head, tail, 2,69);
    print(head);
    cout<<getlength(head)<<endl;

    insertAtposition(head, tail, 3,99);
    print(head);
    cout<<getlength(head)<<endl;
    deletenode(head,5);
    print(head);
 return 0;
}