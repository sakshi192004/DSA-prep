// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix..

// Examples
// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

// Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
// Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0
 
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//      // Function to set entire row and column to 0 if an element in the matrix is 0
//     void setZeroes(vector<vector<int>>& matrix) {
//         // Get number of rows
//         int m = matrix.size();
//         // Get number of columns
//         int n = matrix[0].size();

//         // Traverse each cell of the matrix
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If current cell is zero
//                 if (matrix[i][j] == 0) {
//                     // Mark all elements in this row as -1 (except existing zeros)
//                     for (int col = 0; col < n; col++) {
//                         if (matrix[i][col] != 0)
//                             matrix[i][col] = -1;
//                     }
//                     // Mark all elements in this column as -1 (except existing zeros)
//                     for (int row = 0; row < m; row++) {
//                         if (matrix[row][j] != 0)
//                             matrix[row][j] = -1;
//                     }
//                 }
//             }
//         }

//         // Second pass: replace all -1 markers with 0
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] == -1)
//                     matrix[i][j] = 0;
//             }
//         }
//     }
// };

// int main() {
//     // Example matrix
//     vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
//     // Create Solution object
//     Solution sol;
//     // Call function to modify matrix
//     sol.setZeroes(matrix);
    
//     // Print final matrix
//     for (auto row : matrix) {
//         for (auto val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// } 


// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     // Function to set entire row and column to 0 if an element in the matrix is 0
//     void setZeroes(vector<vector<int>>& matrix) {
//         // Get number of rows
//         int m = matrix.size();
//         // Get number of columns
//         int n = matrix[0].size();

//         // Create row marker array
//         vector<int> row(m, 0);
//         // Create column marker array
//         vector<int> col(n, 0);

//         // First pass: mark rows and columns that need to be zeroed
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If element is zero, mark its row and column
//                 if (matrix[i][j] == 0) {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }

//         // Second pass: set cells to zero based on markers
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If the row or column is marked, set cell to zero
//                 if (row[i] == 1 || col[j] == 1) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to set entire row and column to 0 if an element in the matrix is 0 (Optimal O(1) space)
    void setZeroes(vector<vector<int>>& matrix) {
        // Get dimensions of matrix
        int m = matrix.size();
        int n = matrix[0].size();

        // Flag to track if first row should be zeroed
        bool firstRowZero = false;
        // Flag to track if first column should be zeroed
        bool firstColZero = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set matrix cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    // Create the matrix
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    // Create Solution object
    Solution obj;
    // Call function
    obj.setZeroes(matrix);
    
    // Print the updated matrix
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}


// int setMatrixZero(int mat[][3],int n,int m){
//   int rowIdx;
//   int colIdx;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(mat[i][j]==0){
//         rowIdx=i;
//         colIdx=j;
//       }
//     }
//   }
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       mat[rowIdx][j]=0;
//       mat[i][colIdx]=0;
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// int main(){
//   int mat[3][3]={{1,1,1},{1,0,1},{1,1,1}};
//   setMatrixZero(mat,3,3);
//   return 0;
// }