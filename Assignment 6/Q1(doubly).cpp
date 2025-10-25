#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*prev;
        Node*next;
        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }
};

void Insert(Node*&head,int value,int key){
    Node*temp=head;
    Node*nxt=head;
    while(temp->data!=key){
        temp=nxt;
        nxt=nxt->next;
    }
    Node*NewNode=new Node(value);
    temp->next=NewNode;
    NewNode->prev=temp;
    nxt->prev=NewNode;
    NewNode->next=nxt;
}
void Delete(Node*&head,int value){
    Node*temp=head;
    Node*back=temp->prev;
    Node*forw=temp->next;
    while(temp->data!=value){
        back=temp;
        temp=forw;
        forw=temp->next;
    }
    back->next=forw;
    forw->prev=back;
    delete(temp);
}
void Search(Node*&head,int value){
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->data==value){
            cout<<"Found";
            return;
        }
        else{
            temp=temp->next;
        }
    }
    cout<<"Not Found";
}
int main(){
Node c(10);
int ch,val,key;
    while(1){
        cout<<"\n1.Insert 2.Delete 3.Search 4.Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter key and value:";cin>>key>>val; Insert(c,key,val); break;
            case 2: cout<<"Enter key:";cin>>key; Delete(c,key); break;
            case 3: cout<<"Enter key:";cin>>key; Search(c,key); break;
            case 4: return 0;
            default: cout<<"Invalid\n";  
        }
    }
}
