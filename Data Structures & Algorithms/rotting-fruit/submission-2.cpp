class Solution {
public:
    queue<pair<int,int>> q;
    set<pair<int,int>> visited;

    void checkNeighbours(int x,int y,vector<vector<int>>& grid){
        int rows = grid.size();
        int cols = grid[0].size();

        if(x<0 || x >=rows || y<0 || y >= cols || visited.contains({x,y}) ){
            return;
        }

        if(grid[x][y] != 1){
            return;
        }

        q.push({x,y});
        visited.insert({x,y});
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int time = 0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0) {
                    grid[i][j] = -1;
                }
                if(grid[i][j] == 2 && !visited.contains({i,j})){
                    q.push({i,j});
                    visited.insert({i,j});
                }
            }
        }
        int turn =1;

        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                pair<int,int> p = q.front();
                int x = p.first;
                int y = p.second;
                q.pop();
                grid[x][y]  = time+2;

 
                checkNeighbours(x+1,y,grid);
                checkNeighbours(x-1,y,grid);
                checkNeighbours(x,y+1,grid);
                checkNeighbours(x,y-1,grid);

            }

            printGrid(grid);
            cout << "*************" << endl;
          time++;
        }


        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 1) return -1;
            }}
        return time ==0 ? time :  time-1;
    }


    void printGrid(vector<vector<int>> &grid){
        for(vector<int> a : grid){
            for(int b : a){
                cout << b << " ";
            }

            cout << endl;
        }
    }
};
