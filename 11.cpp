#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();

    // Transposing matrix
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reversing each row
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix){
    for(const auto& row : matrix){
        for(int num : row){
            cout << num << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateMatrix(matrix);

    cout << "Rotated Matrix: \n";
    printMatrix(matrix);
    
    return 0;
}