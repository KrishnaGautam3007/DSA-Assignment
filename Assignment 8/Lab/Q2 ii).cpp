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
int MaxBST(Node*root){
    if(root->right==NULL){
        return root->data;
    }
    return MaxBST(root->right);
}
int main() {
    
    return 0;
}
