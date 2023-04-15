class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int y = 0; y < grid.size(); y++){
            for(int x = 0; x < grid[y].size(); x++){
                if(grid[y][x] == '1'){
                    res++;
                    grid[y][x] = '2';
                    checkPoint(x, y, grid);
                }
            }
        }
        return res;
    }
    
    void checkPoint(int i, int j, vector<vector<char>>& grid){
        int x = i, y = j;
        
        //check left
        if(0 <= x-1 && grid[y][x-1] == '1'){
            grid[y][x-1] = '2';
            checkPoint(x-1, y, grid);
        }

        //checking right
        if(x+1 < grid[y].size() && grid[y][x+1] == '1'){
            grid[y][x+1] = '2';
            checkPoint(x+1, y, grid);
        }
        
        
        //checking up
        if(0 <= y-1 && grid[y-1][x] == '1'){
            grid[y-1][x] = '2';
            checkPoint(x, y-1, grid);
        }
        
        
        //checking down
        if(y+1 < grid.size() && grid[y+1][x] == '1'){
            grid[y+1][x] = '2';
            checkPoint(x, y+1, grid);
        }
        
        
    }
};