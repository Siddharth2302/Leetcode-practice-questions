class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int mid = 0;
        int count = 0;
        for(int i = 0 ; i<grid.size() ; i++){
            for(int j = 0 ; j<grid[i].size() ; j++ ){
            if(grid[i][j]<mid){
                count++;
            }
            }

        }
        return count;
    }
};
