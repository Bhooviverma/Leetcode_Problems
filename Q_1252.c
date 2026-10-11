int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    
    int matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int k = 0; k < indicesSize; k++) {
        
        int r = indices[k][0];
        int c = indices[k][1];

        for (int j = 0; j < n; j++) {
            matrix[r][j]++;
        }

        for (int i = 0; i < m; i++) {
            matrix[i][c]++;
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 != 0) {
                count++;
            }
        }
    }

    return count;
}
