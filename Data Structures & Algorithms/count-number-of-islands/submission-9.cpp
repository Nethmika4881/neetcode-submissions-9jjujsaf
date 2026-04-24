class Solution {
public:
    set<pair<int,int>> s;
    
    void bfs(int i,int j,vector<vector<char>> &grid){
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int,int>> q;
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};


        q.push({i,j});


        while(!q.empty()){
        
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        

        for(auto dir : directions){
            int deltaX = dir.first;
            int deltaY = dir.second;

            int newX  = x+deltaX;
            int newY = y+deltaY;

            if(newX >=0 && newX < rows && newY >=0 && newY < cols && grid[newX][newY]=='1' && !s.contains({newX,newY})){
                s.insert({newX,newY});
                q.push({newX,newY});
            }
        }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == '1' && !s.contains({i,j})){
                    s.insert({i,j});
                    bfs(i,j,grid);
                    n++;
                }
            }
        }


        return n;
        }
};
