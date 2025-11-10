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
int MinDepth(Node*root){
    if(root==NULL){
        return 0;
    }
    else{
        int l=MinDepth(root->left);
        int r=MinDepth(root->right);
        if(l==0){
            return r+1;
        }
        else if(r==0){
            return l+1;
        }
        else if(l<r){
            return l;
        }
        else{
            return r;
        }
    }
}
int main() {
    
    return 0;
}
