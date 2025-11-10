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
//MAX-koi bhi value jisse badi value tree me exist ni krti
//MIN-koi bhi value jisse choti value tree me exist ni krti
bool CheckBST(Node*root,int max,int min){
    if(root==NULL){
        return true;
    }
    else if(root->data <=minVal || root->data>=maxVal){
        return false;
    }
    else{
        return CheckBST(root->left,root->data,min)&&CheckBST(root->right,max,root->data);
    }
}
int main() {
    
    return 0;
}
