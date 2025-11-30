
#include <iostream>
#include<unordered_set>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
bool duplicates(Node* root,unordered_set<int>&seen){
    if(root==NULL) return false;
    if(seen.find(root->data) != seen.end()) {
        return true;
    }
    seen.insert(root->data);
    return duplicates(root->left,seen) || duplicates(root->right,seen);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(2); 

    unordered_set<int> seen;

    if(duplicates(root,seen))
        cout <<"Duplicates Found";
    else
        cout <<"No Duplicates";
    return 0;
}
