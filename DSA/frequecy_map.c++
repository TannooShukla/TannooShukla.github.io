#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 2, 1, 4, 3, 2, 4, 4, 4};
    map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
    }
    cout << "Element Frequency\n";
    for (const auto& pair : frequencyMap) {
        cout << pair.first << " == " << pair.second <<endl;
    }

    return 0;
}
