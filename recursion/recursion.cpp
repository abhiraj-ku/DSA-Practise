#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    int fib=fibo(n-1)+fibo(n-2);
    return fib;
}

int main(){
    int x=6;
    cout<<"5th fibo is:"<<fibo(x);
    return 0;
}
