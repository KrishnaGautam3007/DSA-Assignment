#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val){
data=val;
next=this;
}
};

void insertFirst(int val){
Node* n=new Node(val);
if(head==NULL){
head=n;
n->next=head;
return;
}
Node* temp=head;
while(temp->next!=head) temp=temp->next;
temp->next=n;
n->next=head;
head=n;
}

void insertLast(int val){
Node* n=new Node(val);
if(head==NULL){
head=n;
n->next=head;
return;
}
Node* temp=head;
while(temp->next!=head) temp=temp->next;
temp->next=n;
n->next=head;
}

void insertAfter(int key,int val){
if(head==NULL) return;
Node* temp=head;
while(true){
if(temp->data==key){
Node* n=new Node(val);
n->next=temp->next;
temp->next=n;
return;
}
temp=temp->next;
if(temp==head) break;
}
cout<<"Node not found\n";
}

void insertBefore(int key,int val){
if(head==NULL) return;
if(head->data==key){
insertFirst(val);
return;
}
Node* temp=head;
Node* prev=NULL;
while(true){
if(temp->data==key){
Node* n=new Node(val);
n->next=temp;
prev->next=n;
return;
}
prev=temp;
temp=temp->next;
if(temp==head) break;
}
cout<<"Node not found\n";
}

void deleteNode(int key){
if(head==NULL) return;
Node* temp=head;
Node* prev=NULL;
if(head->data==key){
if(head->next==head){
delete head;
head=NULL;
return;
}
while(temp->next!=head) temp=temp->next;
Node* del=head;
head=head->next;
temp->next=head;
delete del;
return;
}
prev=head;
temp=head->next;
while(temp!=head){
if(temp->data==key){
prev->next=temp->next;
delete temp;
return;
}
prev=temp;
temp=temp->next;
}
cout<<"Node not found\n";
}

void search(int key){
if(head==NULL){ cout<<"Empty\n"; return;}
Node* temp=head;
int pos=1;
while(true){
if(temp->data==key){
cout<<"Found at position "<<pos<<"\n";
return;
}
pos++;
temp=temp->next;
if(temp==head) break;
}
cout<<"Not found\n";
}

void display(){
if(head==NULL){ cout<<"Empty\n"; return;}
Node* temp=head;
while(true){
cout<<temp->data<<" ";
temp=temp->next;
if(temp==head) break;
}
cout<<endl;
}
};

int main(){
Node c;
int ch,val,key;
while(1){
cout<<"\n1.InsertFirst 2.InsertLast 3.InsertAfter 4.InsertBefore 5.Delete 6.Search 7.Display 8.Exit\n";
cout<<"Enter choice: ";
cin>>ch;
switch(ch){
case 1: cout<<"Enter value:";cin>>val; c.insertFirst(val); break;
case 2: cout<<"Enter value:";cin>>val; c.insertLast(val); break;
case 3: cout<<"Enter key and value:";cin>>key>>val; c.insertAfter(key,val); break;
case 4: cout<<"Enter key and value:";cin>>key>>val; c.insertBefore(key,val); break;
case 5: cout<<"Enter key:";cin>>key; c.deleteNode(key); break;
case 6: cout<<"Enter key:";cin>>key; c.search(key); break;
case 7: c.display(); break;
case 8: return 0;
default: cout<<"Invalid\n";
}
}
}
