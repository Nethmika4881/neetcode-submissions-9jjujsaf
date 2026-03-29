class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        vector<int> v1;
        vector<int> v2;
        for(char i : s){
            map1[i]++;
            v1.push_back(i);
        }

        for(char i :t){
            map2[i]++;
            v2.push_back(i);
        }


        bool isAnagram = true;
        if(v1.size() > v2.size()){
        for(auto pair : map1){
            if(pair.second != map2[pair.first]){
                isAnagram  = false;
                break;
            }
        }   
        }
        else{
        for(auto pair : map2){
            if(pair.second != map1[pair.first]){
                isAnagram  = false;
                break;
            }
        }   
        }
        return isAnagram;
    }
};
