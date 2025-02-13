#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main() {
    // Write C++ code here
    vector<int>ar={1,2,2,3,3,3,4,4,5,5,5,5,6,6,6,8,9,10,10};
    unordered_map<int, int>umap;
    //Adding key-value pair
    // umap["cat"]=5;
    // umap["dog"]=8;
    // umap["bird"]=3;
    for(int num:ar){
        umap[num]++;
    }
    for(auto&pair:umap){
        cout<<pair.first<<"=="<<pair.second<<endl;
    }
    return 0;
   
}