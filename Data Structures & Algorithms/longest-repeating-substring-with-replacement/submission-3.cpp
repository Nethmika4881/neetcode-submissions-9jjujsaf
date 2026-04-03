class Solution {
public:
    int findMaxValue(unordered_map<char,int> m){
        int max = 0;

        for(auto pair : m){
            cout << pair.first << " " << pair.second << endl;
            if(max < pair.second){
                max = pair.second;
            }
        }

     

        return max;
    }
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m; //character _ count

        int i = 0;
        int j=0;

        int windowSize;
        int maxRepeatedCount;
        int max=0;
        bool isJincreased = true;
        while(j < s.length()){
            windowSize = j-i+1;
            if(isJincreased)
             {
             m[char(s[j])]++;
            }
            maxRepeatedCount = findMaxValue(m);
            if(windowSize - maxRepeatedCount <= k){
                j++;
                isJincreased = true;
                if(max<windowSize){
                   
                    max = windowSize;
                     cout << "X : "  << max << endl;
                }
            }
            else{
                m[char(s[i])]--;
                 isJincreased = false;
                i++;
            }
        }
        

        return max;

    }
};
