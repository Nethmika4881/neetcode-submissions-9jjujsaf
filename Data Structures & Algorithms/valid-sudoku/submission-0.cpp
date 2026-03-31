class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> set1;
        //row check
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                if(set1.count(board[i][j])){
                    return false;
                } 
                set1.insert(board[i][j]);
            }

            set1.clear();

        };

      

        set1.clear();
        //column check
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]== '.') continue;
                if(set1.count(board[j][i])){
                    return false;
                }
                
                set1.insert(board[j][i]);
                
            }
 

            set1.clear();
        }


        set1.clear();


        //block check

        for(int block=0; block < 9 ; block++){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = (block/3)*3+i;
                    int col = (block%3)*3+j;
                    if(board[row][col] == '.') continue;
                    if(set1.count(board[row][col])){
                        return false;
                    }

                    set1.insert(board[row][col]);
                }
            }

            set1.clear();
        }

        return true;
    }
};
