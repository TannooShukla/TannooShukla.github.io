// #include <iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     vector<string>words={"apple","banana","cherry"};
//     //Iterating using range-based for loop
//     for(const auto&word:words){
//         cout<<word<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>words={"apple","banana","cherry"};
    //Iterating using range-based for loop
    words.push_back("orange");
    //modifying the element
    for(auto& word:words){
        word+="!";
    }
    for(string word:words){
        cout<<word<<" ";
    }
    return 0;
}