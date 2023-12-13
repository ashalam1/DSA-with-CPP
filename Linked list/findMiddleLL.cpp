#include <iostream>

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
    //deconstructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertatHead(Node* &head, int d){
    
    //creat a new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* &head,Node* &tail, int position, int d){
    if(position==1){
        insertatHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    Node* NodeToinsert=new Node(d);
    NodeToinsert->next=temp->next;
    temp->next=NodeToinsert;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getmiddle(Node*head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow->data;
}
    

int main()
{
    Node* Node1=new Node(10);
    Node* head=Node1;
    Node* tail=Node1;
    print(head);
    insertatHead(head,12);
    print(head);
    insertatHead(head,69);
    print(head);
    insertattail(tail,111);
    print(head);
    insertatposition(head,tail,3,93);
    print(head);
    int X=getmiddle(head);
    cout<<"Middle Eelement: "<<X<<endl;
    return 0;
}