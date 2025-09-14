#include <iostream>
using namespace std;
#define SIZE 10
class queue{
public:
    char arr[SIZE];
    int front; 
    int rear;
    queue(){ 
        front = 0; rear = -1; 
    }
    bool isempty(){ 
        return front > rear; 
    }
    void enqueue(char c){ 
        arr[++rear] = c; 
    }
    char dequeue(){
        return arr[front++]; 
    }

    char peek(){ 
        return arr[front]; 
    }
};
int main() {
    string str=" a a b c";
    queue q;
    int freq[256]={0};
    for (int i=0;i<str.length();i++){
    char ch=str[i];
    if (ch==' '){ 
        continue;
    }
    q.enqueue(ch);
    freq[ch]++;
    while(!q.isempty()&&freq[q.peek()]>1){
    q.dequeue();
    }
    if(q.isempty())
    cout<<-1<<" ";
    else
    cout<<q.peek()<<" ";
    }
    return 0;
}
    
   
