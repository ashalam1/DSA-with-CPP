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
    void insertatposition(Node* &tail, Node* &head, int position, int d){
        //insert at head
        if(position==1){
          insertathead(head,d);
            return;
        }
      Node* temp =head;
      int cnt=1;
      while(cnt<position-1){
        temp=temp->next;
        cnt++;
      }
      //insert at tail
      if(temp->next==NULL){
        insertattail(tail,d);
        return;
      }

      //creating node for d
      Node* nodeToInsert=new Node(d);
      nodeToInsert->next=temp->next;
      temp->next=nodeToInsert;

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
       print(head);

    insertattail(tail, 12);
      print(head);
    insertattail(tail, 15);
      print(head);
    insertattail(tail,17);
      print(head);
    insertatposition(tail,head,5,22);
      print(head);
   cout<<"head->"<<head->data<<endl;
    cout<<"tail->"<<tail->data<<endl;

 return 0;
}