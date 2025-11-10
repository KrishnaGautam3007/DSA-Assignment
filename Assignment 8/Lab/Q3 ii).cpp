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
Node*Min(Node*root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node*Del(Node*root,Node*key){
    if(root==NULL){
        return NULL;
    }
    else if(root->data>key){
        root->left=Del(root->left,key);
    }
    else if(root->data<key){
        root->right=Del(root->right,key);
    }
    else{
        if(root->left==NULL&&root->right==NULL){
            return NULL;
        }
        else if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        else{
            Node*temp=Min(root->right){
                root->data=temp->data;
            }
            root->right=Del(root->right,temp->data);
        }
    }
    return root;
}
int main() {
    

    return 0;
}
