// Online C++ compiler to run C++ program online
#include <iostream>
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
void preOrder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node*root){
    if(root==NULL){
        return;
    }
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}
void postOrder(Node*root){
    if(root==NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}
int main() {
    Node* root=new Node(0);
    root->right=new Node(1);
    root->left=new Node(2);
    root->right->right=new Node(3);
    root->right->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left=new Node(6);
    preOrder(root);
    inOrder(root);
    postOrder(root);

    return 0;
}
