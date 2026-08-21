class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lm = 0;
        int rm = matrix.size() - 1;

        while (lm <= rm) {
            int mm = lm + ((rm-lm)/2);
            
            if (matrix[mm][0] > target) {
                rm = mm - 1;
            } else if (matrix[mm][matrix[mm].size() - 1] < target) {
                lm = mm + 1;
            } else {
                vector<int> mat = matrix[mm];
                int ll = 0;
                int rr = mat.size() - 1;

                while (ll <= rr) {
                    int mid = ll + ((rr-ll)/2);
                    if (mat[mid] > target) {
                        rr = mid - 1;
                    } else if (mat[mid] < target) {
                        ll = mid + 1;
                    } else if (mat[mid] == target) {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
