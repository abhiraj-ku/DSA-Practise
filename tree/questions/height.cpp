#include<iostream>

// structure of tree
struct Node{
    int data,
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = nullptr;
    }
}

int height(Node* node){
    if(node==nullptr){
        return -1;   // height of an empty tree is -1;
    }

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    return max(leftHeight,rightHeight)+1;   // height of current node +1 
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);

    int treeHeight = height(root);
    cout<<"height of tree is: "<<treeHeight<<"";

    return 0;

}