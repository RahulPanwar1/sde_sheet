#include <bits/stdc++.h>

void setZeros(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<bool> rowZeros(rows, false);
    vector<bool> colZeros(cols, false);  
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZeros[i] = true;
                colZeros[j] = true;
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        if (rowZeros[i] == 1) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    for (int j = 0; j < cols; j++) {
        if (colZeros[j] == 1) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}
