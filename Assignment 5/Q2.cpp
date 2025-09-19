#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node(int data){
        value=data;
        next=NULL;
    }
};

Node *head=NULL;

int duplicate(int key){
    int count=0;
    while(head!=NULL && head->value==key){
        Node *temp=head;
        head=head->next;
        delete temp;
        count++;
    }
    Node *temp=head;
    Node *a=head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->value==key){
            a=temp->next;
            temp->next=a->next;
            delete a;
            count++;
        }else{
            temp=temp->next;
        }
    }
    return count;
}

void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value;
        if(temp->next!=NULL) cout<<"->";
        temp=temp->next;
    }
    cout<<"\n";
}

int main(){
    int arr[]={1,2,1,2,1,3,1};
    for(int i=0;i<7;i++){
        Node *temp=new Node(arr[i]);
        if(head==NULL) head=temp;
        else{
            Node *t=head;
            while(t->next!=NULL) t=t->next;
            t->next=temp;
        }
    }
    cout<<"Original List: ";display();
    int key=1;
    int c=duplicate(key);
    cout<<"Count: "<<c<<"\n";
    cout<<"Updated List: ";display();
    return 0;
}
