// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
        int data;
        Node*right;
        Node*left;
        Node(int data){
            this->data=data;
            right=NULL;
            left=NULL;
        }
};
bool searchRecursive(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    return (searchRecursive(root->right,key)||searchRecursive(root->left,key));
}
bool searchNonRecursive(Node*root,int key){
    if(root==NULL){
        return false;
    }
    queue<Node*>qu;
    qu.push(root);
    while(!qu.empty()){
        Node*temp=qu.front();
        qu.pop();
        if(temp->data==key){
            return true;
        }
        if(temp->left!=NULL){
            qu.push(temp->left);
        }
        if(temp->right!=NULL){
            qu.push(temp->right);
        }
    }
    return false;
}
int main() {
    Node* root=new Node(0);
    root->right=new Node(1);
    root->left=new Node(2);
    root->right->right=new Node(3);
    root->right->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left=new Node(6);
    cout<<searchRecursive(root,8);
    cout<<searchNonRecursive(root,5);
    return 0;
}
