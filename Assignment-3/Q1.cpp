#include <iostream>
#include <cstdlib>
#define MAX 5
using namespace std;
class Stack {
    int stack[MAX];
    int top;
public:
    Stack() {
        top = -1;
    }
    bool isEmpty(){
        return(top==-1);
    }
    bool isFull(){
        return(top==MAX-1);
    }
    void push(int value){
        if(isFull()){
            cout<<"Stack Overflow! Cannot push "<<value<<endl;
        }
        else{
            stack[++top]=value;
            cout<<value<<"pushed into stack"<<endl;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow! Cannot pop"<<endl;
        }
        else{
            cout<<stack[top--]<<" popped from stack"<< endl;
        }
    }
    void peek(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            cout<<"Top element is: "<<stack[top]<<endl;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
        } 
        else{
            cout<<"Stack elements: ";
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Stack s;
    int choice,value;

    while(true){
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Check if Empty\n";
        cout<<"4. Check if Full\n";
        cout<<"5. Display\n";
        cout<<"6. Peek\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
        case 1:
            cout<<"Enter value to push: ";
            cin>>value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            if(s.isEmpty())
                cout<<"Stack is Empty\n";
            else
                cout<<"Stack is not Empty\n";
            break;
        case 4:
            if(s.isFull())
                cout<<"Stack is Full\n";
            else
                cout<<"Stack is not Full\n";
            break;
        case 5:
            s.display();
            break;
        case 6:
            s.peek();
            break;
        case 7:
            cout<<"Exiting"<< endl;
            exit(0);
        default:
            cout<<"Invalid choice! Try again.\n";
        }
    }
    return 0;
}
