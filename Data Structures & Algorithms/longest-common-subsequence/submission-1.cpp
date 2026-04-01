class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> arr(text2.size()+1,vector<int> (text1.size()+1,0));

        for(int i=1; i <= text2.size() ; i++){
            for(int j=1;j<=text1.size();j++){
                if(text2[i-1] == text1[j-1]){
                   
                    arr[i][j] = arr[i-1][j-1]+1;
                }
                else{
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }

        for(int i=1; i <= text2.size() ; i++){
            for(int j=1;j<=text1.size();j++){

                cout << arr[i][j];
            }
            
            cout << endl;
            }

        return arr[text2.size()][text1.size()];
    }
};
