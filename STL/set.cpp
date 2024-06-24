#include<iostream>
#include <set>
// #include<bits/stdc++.h>

using namespace std;
int main(){
    set<int> num;
    num.insert(4);
    num.insert(10);
    num.insert(20);
    num.insert(30);
    num.insert(30);
   
     if(num.find(30)!=num.end()){
        cout<<"num is present"<<endl;
     }else{
        cout<<"num is absent";
     }
     cout<<num.count(30);  //returns 0 if no count and 1 if count is there
    return 0;
}