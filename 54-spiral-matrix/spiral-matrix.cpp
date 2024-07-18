class Solution {
public:
    void FRow(vector<int>& ans, int& i, int& j, int& end, int rows, int cols,
              vector<vector<int>> matrix) {
        while (j < cols - end) {
            ans.push_back(matrix[i][j]);
            if (ans.size() == rows * cols)
                break;
            j++;
        }
    }
    void LCol(vector<int>& ans, int& i, int& j, int& end, int rows, int cols,
              vector<vector<int>> matrix) {
        i++;
        j--;
        while (i < rows - end) {
            ans.push_back(matrix[i][j]);
            if (ans.size() == rows * cols)
                break;
            i++;
        }
    }
    void LRow(vector<int>& ans, int& i, int& j, int& end, int rows, int cols,
              vector<vector<int>> matrix) {
        j--;
        i--;
        while (j >= 0 + end) {
            ans.push_back(matrix[i][j]);
            if (ans.size() == rows * cols)
                break;
            j--;
        }
    }
    void FCol(vector<int>& ans, int& i, int& j, int& end, int rows, int cols,
              vector<vector<int>> matrix) {
        j++;
        i--;
        while (i >= 1 + end) {
            ans.push_back(matrix[i][j]);
            if (ans.size() == rows * cols)
                break;
            i--;
        }
        i++;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;
        int i = 0, j = 0;
        int end = -1;
        if (rows == 1) {
            for (int j = 0; j < cols; j++) {
                ans.push_back(matrix[0][j]);
            }
        } else if (cols == 1) {
            for (int i = 0; i < rows; i++) {
                ans.push_back(matrix[i][0]);
            }
        } else {
            while (ans.size() != rows * cols) {
                end++;
                FRow(ans, i, j, end, rows, cols, matrix);
                if (ans.size() == rows * cols)
                    break;
                LCol(ans, i, j, end, rows, cols, matrix);
                if (ans.size() == rows * cols)
                    break;
                LRow(ans, i, j, end, rows, cols, matrix);
                if (ans.size() == rows * cols)
                    break;
                FCol(ans, i, j, end, rows, cols, matrix);
                j++;
            }
        }
        return ans;
    }
};