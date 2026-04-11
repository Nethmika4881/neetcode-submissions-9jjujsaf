class Solution {
public:
    set<pair<int,int>> visited;
    
    void bfs(int i,int j,vector<vector<char>>& grid){
            int rows = grid.size();
            int cols = grid[0].size();
            queue<pair<int,int>> q;
            vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

            q.push({i,j});

            while(!q.empty()){
                pair<int,int> p = q.front();
                q.pop();
                int x = p.first;
                int y = p.second;
                for(pair<int,int> d :  directions){
                    int deltaX = d.first;
                    int deltaY = d.second;

                    if( 0<= (x+deltaX) && (x+deltaX) < rows && 0<= (y+deltaY)  && (y+deltaY) < cols && !visited.contains({x+deltaX,y+deltaY}) && grid[x+deltaX][y+deltaY] == '1'){
                        visited.insert({x+deltaX,y+deltaY});
                        q.push({x+deltaX,y+deltaY});
                    }
                }
            }
    }
    int numIslands(vector<vector<char>>& grid) {
        int numOfIslands = 0;
        int rows  = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == '1' && !visited.contains({i,j})){
                    bfs(i,j,grid);
                    visited.insert({i,j});
                    numOfIslands++;
                }
            }
        }


        return numOfIslands;
    }
};
