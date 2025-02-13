
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     vector<int> numbers(n);

//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }

//     for (int num : numbers) {
//         cout << num << " ";
//     }

//     return 0;
// }

// vector thorugh function

#include <iostream>
#include <vector>
using namespace std;
void printVector(const vector<int> &numbers)
{
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
}
void printincVector(vector<int> &numbers)
{
    for (int &val : numbers) // pass by reference
    {
        val += 2;
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 7};
    printVector(numbers);
    printincVector(numbers);
    printVector(numbers);
}