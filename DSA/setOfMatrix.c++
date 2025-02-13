#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    bool first_row_zero = false;
    bool first_col_zero = false;

    // 1. Check if first row or column has any zeros
    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] == 0) {
            first_row_zero = true;
            break;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (matrix[i][0] == 0) {
            first_col_zero = true;
            break;
        }
    }

    // 2. Use first row and column as markers (starting from [1][1])
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // 3. Set zeros based on markers (starting from [1][1])
    for (int i = 1; i < m; ++i) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < n; ++j) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 1; j < n; ++j) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < m; ++i) {
                matrix[i][j] = 0;
            }
        }
    }

    // 4. Set first row and column if necessary
    if (first_row_zero) {
        for (int j = 0; j < n; ++j) {
            matrix[0][j] = 0;
        }
    }

    if (first_col_zero) {
        for (int i = 0; i < m; ++i) {
            matrix[i][0] = 0;
        }
    }
}


int main() {
    vector<vector<int>> matrix1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix1);
    cout << "Set zeroes matrix1:\n";
    for (const auto& row : matrix1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    // Expected output:
    // 1 0 1
    // 0 0 0
    // 1 0 1

    vector<vector<int>> matrix2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(matrix2); 
    cout << "\nSet zeroes matrix2:\n";
    for (const auto& row : matrix2) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    // Expected output:
    // 0 0 0 0
    // 0 4 5 0
    // 0 3 1 0

    vector<vector<int>> matrix3 = {{1,2,3},{0,5,0},{7,8,9}};
    setZeroes(matrix3);
    cout << "\nSet zeroes matrix3:\n";
    for (const auto& row : matrix3) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    // Expected output:
    // 0 2 0
    // 0 0 0
    // 0 8 0


    vector<vector<int>> matrix4 = {{1,0}};
    setZeroes(matrix4);
    cout << "\nSet zeroes matrix4:\n";
    for (const auto& row : matrix4) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    // Expected output:
    // 0 0

        vector<vector<int>> matrix5 = {{0},{1}};
    setZeroes(matrix5);
    cout << "\nSet zeroes matrix5:\n";
    for (const auto& row : matrix5) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    // Expected output:
    // 0
    // 1


    return 0;
}