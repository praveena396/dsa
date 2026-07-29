#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {

        // Traverse Left -> Right
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // Traverse Top -> Bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Traverse Right -> Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Traverse Bottom -> Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = spiralOrder(matrix);

    cout << "\nSpiral Order:\n";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}