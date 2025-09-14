#include <iostream>
using namespace std;
#define SIZE 10
class queue{
public:
    int arr[SIZE];
    int front;
    int rear;
    queue(){ 
        front = 0; 
        rear = -1; 
    }
    bool isempty(){ 
        return front>rear; 
    }
    bool isfull(){ 
        return rear==SIZE-1; 
    }
    void enqueue(int x){
        if (isfull()){ 
            cout << "queue full"; 
            return; 
        }
        arr[++rear]=x;
    }
    int dequeue(){
        if (isempty()){ 
            cout << "queue Empty"; 
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
    int size(){
        return rear-front+1; 
    }
};
class stackone {
    queue q;
public:
    void push(int x){
        q.enqueue(x);
        int sz=q.size();
        for (int i=0;i<sz-1;i++){
            q.enqueue(q.dequeue());
        }
    }
    int pop() {
        if (q.isempty()){ 
            cout<<"stack empty"; 
            return -1; 
        }
        return q.dequeue();
    }
    int top() {
        if(q.isempty()){ 
            return -1;
        }
        q.peek();
    }
};
int main() {
    stackone s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top: "<< s.top()<< endl;
    cout<<"Pop: "<< s.pop()<< endl;
    cout<<"Top: "<< s.top()<< endl;
    return 0;
}
