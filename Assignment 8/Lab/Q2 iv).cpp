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
Node*Inorder(Node*root,Node*x){
    if(root==NULL){
        return NULL;
    }
    if(x->data<root->data){
        Inorder(root->left,x);
        if(left!=NULL){
            return left;
        }
        else{
            return root;
        }
    }
    else{
        return Inorder(root->right,x);
    }
}
Node* InputBST(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node*root=new Node(val);
    root->left=InputBST();
    root->right=InputBST();
    return root;
}

int main() {
    root=InputBST();
    int x;
    cin>>x;
    Inorder(root,x);
    return 0;
}
