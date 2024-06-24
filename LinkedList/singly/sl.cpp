
// Program To create a linkedlist and print it 

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;


    Node(int value): val(value) ,next(nullptr){}
};


void printNode(Node *n){
    while(n!=NULL){
        cout<<n->val<<endl;
        cout<< n->next<<endl;
        n=n->next;

    }
}
int main(){

    // Creating a node with new keyword
    Node *head =new Node(7);
    Node *second=new Node(5);
    Node *third=new Node(3);

    
    // head->val=1;
    // second->val=2;
    // third->val=8;

    head->next=second;
    second->next=third;
    third->next=NULL;
    printNode(head);
    return 0;
}