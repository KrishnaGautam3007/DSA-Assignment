#include <iostream>
#include <queue>
using namespace std;
void insert(queue<int>& q,int x){
    if(q.empty()||x<=q.front()){
        q.push(x);
        return;
    }
    int temp=q.front();
    q.pop();
    insert(q, x);
    q.push(temp);
}
void sort(queue<int>&q){
    if(q.empty()){
        return;
}
    int temp=q.front();
    q.pop();
    sortQueue(q);  
    insert(q,temp);
}
int main() {
    queue<int> q;
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);
    sort(q);
 while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
