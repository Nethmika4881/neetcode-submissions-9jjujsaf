class Solution {
public:

    void addLand(int x,int y,vector<vector<int>> grid){
            int rows = grid.size();
            int cols = grid[0].size();
            if(  x < 0 || x >= rows || y < 0 || y >= cols || grid[x][y] == -1 || visited.contains({x,y})){
                return ;
            }
            visited.insert({x,y});
            q.push({x,y});
        }
    set<pair<int,int>> visited;
    queue<pair<int,int>> q;
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i < rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 0){
                    q.push({i,j});
                    visited.insert({i,j});
                }
            }
        }


        int distance = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                pair<int,int> p = q.front();
                int x = p.first;
                int y = p.second;
                q.pop();
                grid[x][y] = distance;
                addLand(x+1,y,grid);
                addLand(x-1,y,grid);
                addLand(x,y+1,grid);
                addLand(x,y-1,grid);

            }

            distance++;
        }
    }
};
