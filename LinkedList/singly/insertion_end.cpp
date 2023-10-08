
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int value): val(value) ,next(nullptr){}
};


void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    Node *node1 =new Node(4);
   Node *head =node1;
    Node *tail=node1;
    insertAtTail(tail,6);
    insertAtTail(tail,5);
    print(head);
    return 0;
}