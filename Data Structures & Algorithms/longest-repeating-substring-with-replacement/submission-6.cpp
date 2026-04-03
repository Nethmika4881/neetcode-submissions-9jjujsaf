class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;

        int i = 0;
        int maxFreq = 0;
        int maxLength = 0;

        for(int j=0;j<s.length();j++){
            m[s[j]]++;

            maxFreq = max(maxFreq,m[s[j]]);

            int windowSize = j-i+1;

            if(windowSize - maxFreq > k){
                m[s[i]]--;
                i++;
            }

            maxLength = max(maxLength,j-i+1);
        }

        return maxLength;

        
    }
};

 

 