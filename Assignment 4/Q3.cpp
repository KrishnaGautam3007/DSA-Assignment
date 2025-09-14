#include <iostream>
using namespace std;
#define SIZE 6
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
        return rear==SIZE-1;
    }
    void enqueue(int val) {
        if(isfull()){
            cout<<"queue is full";
            return;
        }
        arr[++rear]=val;
    }
    int dequeue() {
        if(isempty()){
            cout<<"queue is empty";
            return;
        }
        return arr[front++];
    }
};

int main(){
    queue n1,n2;
    int arr[SIZE]={4,7,11,20,5,9};

    for(int i=0;i<SIZE;i++){
        n1.enqueue(arr[i]);
    }
    int n=SIZE/2;
    for(int i=0;i<n;i++){
        n2.enqueue(n1.dequeue());
    }
    while(!n2.isempty()){
        cout<<n2.dequeue()<<endl;
        cout<<n1.dequeue()<<endl;
    }
}
