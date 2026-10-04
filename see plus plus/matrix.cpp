#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void markRow(vector<vector<int>>&mat, int i) {
    int m = mat[0].size();
    for (int j = 0; j<m; j++) {
        if (mat[i][j] !=0) {
            mat[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &mat, int j) {
    int n = mat.size();
    for (int i = 0; i<n; i++) {
        if (mat[i][j] != 0) {
            mat[i][j] = -1;
        }
    }
}

void MatrixZeroBrute(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] == 0) {
                markRow(mat, i);
                markCol(mat, j);
            }
        }
    }
    
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] == -1) {
                mat[i][j] = 0;
            }
        }
    }
}

void MatrixZeroBetter(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<int>row(n, 0);
    vector<int>col(m, 0);

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 0;
            }
        }
    }
}

void MatrixZeroOptimal(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();
    int col0 = 1;

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] == 0) {
                mat[i][0] = 0;

                if (j!=0) {
                    mat[0][j] = 0;
                }
                else col0 = 0;
            }
        }
    }


    for (int i = 1; i<n; i++) {
        for (int j = 1; j<m; j++) {
            if (mat[i][j]!=0) {
                if (mat[0][j] == 0 || mat[i][0] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
    }
    if (mat[0][0] == 0) {
        for (int j = 0; j<m; j++) {
            mat[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i<n; i++) {
            mat[i][0] = 0;
        }
    }
}

void RotatMatrix(vector<vector<int>>&mat) {
    int n = mat.size();
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (int i = 0; i<n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

void spiralMatrix(vector<vector<int>&mat) {

    int n = mat.size();
    int m = mat[0].size();
    int top = 0; int left = 0;
    int right = m-1;
    int bottom = n-1;
    for (int i = left; i<right; i++) {
        cout << mat[top][i] << " ";
        top--;
    }
    for (int i = top; i<bottom; i++) {
        cout << mat[i][right] << " ";
        right--;
    }
    if (top<= bottom) {
        for (int i = right; i<left; i++) {
            cout << mat[bottom][i] << " ";
        }
        bottom--;
    }
    if (left<=right) {
        for (int i = bottom; i<top; i++) {
            cout << mat[i][left] << " ";
        }
        left--;
    }
}



int main () {

    vector<vector<int>>mat = {
        {1,1,1,1},
        {1,0,1,1},
        {1,1,0,1},
        {1,0,0,1}
    };

    // MatrixZeroBrute(mat);
    // display(mat);

    MatrixZeroBetter(mat);
    display(mat);

    // MatrixZeroOptimal(mat);
    // display(mat);
    return 0;
}

for (int i = 0; i<n-2; i++) {
    for (int j = i+1; j<n-1; j++) {
        swap(arr[i][j], arr[j][i]);
    }
}