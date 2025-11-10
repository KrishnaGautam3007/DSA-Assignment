// Online C++ compiler to run C++ program online
#include <iostream>
class Node{
    public:
        int data;
        Node*left;
        Node*right;
        Node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};
int MaxDepth(Node*root){
    if(root==NULL){
        return 0;
    }
    int l=MaxDepth(root->left);
    int r=MaxDepth(root->right);
    if(l>r){
        return l+1;
    }
    else{
        return r+1;
    }
}
int main() {
    return 0;
}
