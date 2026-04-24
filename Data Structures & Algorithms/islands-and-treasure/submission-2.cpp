class Solution {
public:
    set<pair<int,int>> s;
    queue<pair<int,int>> q;

    void addLand(int i,int j,vector<vector<int>> &grid){
        int rows = grid.size();
        int cols = grid[0].size();
        if(i < rows && i >= 0 && j >= 0 && j < cols && grid[i][j] != -1 && !s.contains({i,j})){
            q.push({i,j});
            s.insert({i,j});
        }
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 0){
                    q.push({i,j});
                    s.insert({i,j});
                }
            }
        }


   int distance =0 ;
        while(!q.empty()){
            int size = q.size();
         
            for(int i=0;i<size;i++){
                int x = q.front().first;
                int y = q.front().second;
              
                q.pop();

        

                grid[x][y]  = distance;

                addLand(x+1,y,grid);
                addLand(x-1,y,grid);
                addLand(x,y-1,grid);
                addLand(x,y+1,grid);
            }

            distance++;
        }
    }
};
