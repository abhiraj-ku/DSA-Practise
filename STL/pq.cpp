#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(15);
    pq.push(9);

    cout<<"at top is highest:"<<pq.top()<<endl;

    pq.pop();
    return 0;
}