
// Program To create a linkedlist and print it 

#include <bits/stdc++.h>
using namespace std;


// user defined Node datatype which has int and a self refer pointer which points to the next element of the node
struct Node
{
    int val;
    Node *next;


    Node(int value): val(value) ,next(nullptr){}
};

// function to print node which takes reference of the head node
void printNode(Node *n){
    while(n!=NULL){
        cout<<n->val<<endl;
        n=n->next;

    }
}
int main(){

    // Creating a node with new keyword
    Node *head =new Node(7);
    Node *second=new Node(5);
    Node *third=new Node(3);

    // intializing the node with a int value
    // head->val=1;
    // second->val=2;
    // third->val=8;

    // adding links between nodes
    head->next=second;
    second->next=third;
    third->next=NULL;

    
    // calling the fucntion and passing the head as the param
    printNode(head);
    return 0;
}