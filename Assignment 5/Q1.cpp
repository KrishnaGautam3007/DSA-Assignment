#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};
//a)
void InsertAtHead(Node*&head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
//b)
void InsertAtTail(Node*&tail,int data){
    Node*temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
//c)
void Insert(Node*&head,int value,int data){
    Node*temp=head;
    while(temp->data!=value){
        temp=temp->next;
    }
    Node*n=new Node(data);
    n->next=temp->next;
    temp->next=n;
}
//d)
void DeleteHead(Node*&head){
    Node*temp=head;
    temp=temp->next;
    head->next=NULL;
    head=temp;
}
//e)
void DeleteTail(Node*&head,Node*&tail){
    Node*temp=head;
    while((temp->next)->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
}
//f)
void DeleteNode(Node*&head,int value){
    Node*temp=head;
    Node*prev;
    while(temp->data!=value){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    temp->next=NULL;
}
//g)
int SearchNode(Node*&head,int value){
    Node*temp=head;
    int count=1;
    while(temp->data!=value){
        temp=temp->next;
        count++;
    }
    return count;
}
//h)
void print(Node*head){
    Node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){
    Node*n1=new Node(10);

}
