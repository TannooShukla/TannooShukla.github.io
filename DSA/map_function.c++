#include <iostream>
#include <map>
using namespace std;
void printMap(const map<int, string> &mp)
{
    for (auto &pair : mp)
    {
        cout << "key : " << pair.first << " value : " << pair.second << endl;
    }
}
int main()
{
    map<int, string> mp;
    mp[1] = "apple";
    mp[2] = "banana";
    mp[3] = "cherry";
    mp[4] = "orange";
    printMap(mp);
}