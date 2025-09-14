#include <iostream>
using namespace std;
#define SIZE 10
class queue{
public:
    int arr[SIZE];
    int front;
    int rear;
    queue(){ 
        front=0; 
        rear=-1; 
    }
    bool isempty(){ 
        return front>rear; 
    }
    bool isfull(){ 
        return rear==SIZE - 1; 
    }
    void enqueue(int x) 
    {
        if(isfull()){
            cout<<"Queue Full"; 
            return; 
        }
        arr[++rear] = x;
    }
    int dequeue(){
        if (isempty()){ 
            cout<<"Queue Empty"; 
            return -1; 
        }
        return arr[front++];
    }
    int peek(){
        if(isempty()){ 
            return -1;
        }
        return arr[front];
    }
};

class stacktwo{
    queue q1, q2;
public:
    void push(int x) {
        q2.enqueue(x);
        while (!q1.isempty()){
            q2.enqueue(q1.dequeue());
        }
        queue temp=q1; 
        q1=q2; 
        q2=temp;
    }
    int pop() {
        if (q1.isempty()) 
        { 
        cout<<"Stack Empty"; 
        return -1; 
        }
        return q1.dequeue();
    }
    int top() {
        if(q1.isempty()){ 
            return -1;
        } 
        q1.peek();
    }
};
int main() {
    stacktwo s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Pop: "<<s.pop()<<endl;
    cout<<"Top: "<<s.top()<<endl;
    return 0;
}
