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
Node*InorderPre(Node*root,Node*x){
    if(root==NULL){
        return NULL;
    }
    if(x->data>root->data){
        Node*right=InorderPre(root->right,x);
        if(left!=NULL){
            return right;
        }
        else{
            return root;
        }
    }
    else{
        return InorderPre(root->left,x);
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
    Node*n=InorderPre(root,x);

    return 0;
}
