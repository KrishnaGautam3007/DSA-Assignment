#include <iostream>
#include <queue>
#include <stack>
using namespace std;
bool canBeSorted(queue<int> inputQueue) {
    stack<int>s;
    int x=1;
    int n=inputQueue.size();
    while(!inputQueue.empty()) {
        int front=inputQueue.front();
        inputQueue.pop();
        if(front==x) {
            x++;
        } 
        else{
            while(!s.empty()&&s.top()==x){
                s.pop();
                x++;
            }
            s.push(front);
        }
    }
    while(!s.empty()&&s.top()==x){
        s.pop();
        x++;
    }
 return (x == n + 1);
}

int main() {
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    if(canBeSorted(q))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
