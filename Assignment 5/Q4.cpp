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
void Rev(Node*& head) {
    Node*curr=head;
    Node*prv=NULL;
    Node*nxt=NULL;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prv;
        prv=curr;
        curr=nxt;
    }
    head=prv;
}
