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

void count(Node*&head){
    if(head==NULL){
        cout<<"list is empty"
    }
    
    Node*temp=head;
    int count=1;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    cout<<"Size of Doubly LL is: "<<count;
}
