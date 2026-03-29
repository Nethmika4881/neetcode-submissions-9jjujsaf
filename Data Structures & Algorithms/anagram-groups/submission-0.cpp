class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> map1;
        vector<vector<string>> arr;
        for(string w : strs){
            string word = w;
            sort(word.begin(),word.end());
            map1[word].push_back(w);
        }


        for(auto &pair : map1){
            arr.push_back(pair.second);
        }

        return arr;
    }
};
