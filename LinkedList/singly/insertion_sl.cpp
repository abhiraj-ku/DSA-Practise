
// Program To insert in  a singly  linkedlist and print it 

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int value): val(value) ,next(nullptr){}
};

void insertAtHead(Node* &head ,int n){
    Node *temp=new Node(n);
    temp->next=head;
    head = temp;
}

void printNode(Node *n){
    while(n!=NULL){
        cout<<n->val<<endl;
        n=n->next;

    }
}
int main(){
    Node *node1 =new Node(7);
    Node *head=node1;
    insertAtHead(head,15);
    printNode(head);
    return 0;
}