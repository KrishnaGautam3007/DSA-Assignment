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
int Middle(Node* head) {
    Node*i=head;
    Node*j=head;
    while(j!=NULL&&j->next!=NULL){
        i=i->next;
        j=j->next->next;
    }
    return i->data;
}
