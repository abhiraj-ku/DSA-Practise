#include<iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> num;
    num.push(4);
     num.push(10);
    num.push(20);
    num.push(30);
    num.pop();
    cout<<num.front()<<endl;
    cout<<num.back();
    return 0;
}



