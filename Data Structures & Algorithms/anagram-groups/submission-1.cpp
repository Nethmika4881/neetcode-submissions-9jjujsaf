class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> m;
        for(string x : strs){
            string word = x;
            sort(word.begin(),word.end());
            m[word].push_back(x);
                
        }



        vector<vector<string>> arr;

        for(auto p : m){
            arr.push_back(p.second);
        }

        return arr;
    }
};
