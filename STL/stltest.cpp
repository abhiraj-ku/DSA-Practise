#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>num={1,5,8,9,15};

    num.insert(num.begin()+1,2,2);
    for(auto i:num){
        cout<<i<<endl;

    }
    cout<<"size before removing last elem"<<num.size()<<endl;
    num.pop_back();
     for(auto i:num){
        cout<<i<<endl;

    }

    cout<<"size after removing last elem"<<num.size()<<endl;
    cout<<"after clearing"<<endl;
    num.clear();


for(auto i:num){
        cout<<i<<endl;

    }

    return 0;
}
