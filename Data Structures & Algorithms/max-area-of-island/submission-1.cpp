class Solution {
public:
    set<pair<int,int>> visited;
    int maxArea = 0 ;
    void bfs(int i , int j,vector<vector<int>> &graph){
        int rows = graph.size();
        int cols = graph[0].size();
      
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        queue<pair<int,int>> q;

        q.push({i,j});
        int size=1;
        while(!q.empty()){
            pair<int,int> p  = q.front();
            int x = p.first;
            int y = p.second;

            q.pop();
            for(pair<int,int> d : directions){
                int deltaX = d.first;
                int deltaY = d.second;

                int newX = x+deltaX;
                int newY = y+deltaY;
        
                if(0 <= newX && newX < rows && 0 <= newY && newY < cols && !visited.contains({newX,newY}) && graph[newX][newY] == 1 ){
                    visited.insert({newX,newY});
                    q.push({newX,newY});

                    size+=1;
                }

            }
        }


        if(maxArea <  size ) maxArea = size;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int rows  = grid.size();
     int cols = grid[0].size();


     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(grid[i][j] == 1 && !visited.contains({i,j})){
                visited.insert({i,j});
                bfs(i,j,grid);
            }
        }
     }   
        return maxArea;
    }
};
