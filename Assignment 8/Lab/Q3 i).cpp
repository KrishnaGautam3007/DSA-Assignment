// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
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
Node*Insert(Node*root,Node*val){
    if(root==NULL){
        return new Node(val);
    }
    else if(val<root->data){
        root->left=Insert(root->left,val);
    }
    else if(val>root->data){
        root->right=Insert(root->right,val);
    }
    return root;
}
int main() {
    
    return 0;
}
