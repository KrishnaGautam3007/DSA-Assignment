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
bool searchRecursive(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    return (searchRecursive(root->right,key)||searchRecursive(root->left,key));
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
    return 0;
}
