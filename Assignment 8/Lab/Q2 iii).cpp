// Online C++ compiler to run C++ program online
#include <iostream>
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
int MinBST(Node*root){
    if(root->left==NULL){
        return root->data;
    }
    return MinBST(root->left);
}
int main() {
    

    return 0;
}
