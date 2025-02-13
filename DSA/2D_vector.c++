// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Declaring a 2D array
    vector<vector<int>>vec ={{1,2,3},{4,5,6},{7,8,9}};
    //Adding a new Row
    vec.push_back({10,11,12});
    //Printing the 2D array
    for(const auto& row : vec){
        for(int val: row){
            cout<<val<<" ";
            
        }
        cout<<endl;
        
    }
    return 0;
}