// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
using namespace std;


int main() {
    map<int,string>m;
    map<int,int>n;
    map<string ,string>s;
    s["one"]="apple";
    s["two"]="banana";
    s["three"]="mango";
    n[1]=1;
    n[2]=2;
    n[4]=4;
    //Inserting elements
    m[1]="One";
    m[3]="Three";
    m[2]="Two";
    m.insert({5,"five"});
    n.insert({5,5});
    s.insert({"five","papaya"});
    //Accesing elements
    cout<<"KEY HAS 2 VALUE: "<<m[2]<<endl;
    //Iterating over map
    for(auto&pair:m){
        cout<<"key: "<<pair.first<<",value: "<<pair.second<<endl;
    }
    for(auto&num:n){
        cout<<"key: "<<num.first<<",value: "<<num.second<<endl;
    }
    for(auto&str:s){
        cout<<"key: "<<str.first<<", value: "<<str.second<<endl;
    }
    return 0;
}