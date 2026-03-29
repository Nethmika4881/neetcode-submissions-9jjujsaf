class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> array1;
        vector<int> array2;
        
        if(s.length()!= t.length()){
            return false;
        }


        for(char i : s){
            array1.push_back(i);
        }

        for(char i : t){
            array2.push_back(i);
        }

        sort(array1.begin(),array1.end());
        sort(array2.begin(),array2.end());

        string word1 = "";
        string word2 = "";
        for(char i : array1){
            word1+=i;
        }

        for(char i : array2){
            word2 += i;
        }

        if(word1 == word2){
            return true;
        }

        return false;
    }
};
