class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
     for(int i=0;i<matrix.size();i++){
        for(int z=0;z<matrix[i].size();z++){
            if(matrix[i][z]==target){
                return 1;
            }
        }
    }
    return 0;
    }
};