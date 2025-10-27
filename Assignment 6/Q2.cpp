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

void Display(Node*&head){
    if(head==NULL){
        cout<<"list is empty"
    }
    
    Node*temp=head;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(temp!=head);
    cout<<temp->data;
}
