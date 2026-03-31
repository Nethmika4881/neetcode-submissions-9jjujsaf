class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        
        unordered_set<char> set1;
        int max=0;
        int length=0;
        
        int i=0;

        while(i < s.length()){
           int j=i;
           while(set1.find(s[j])== set1.end() && j < s.length()){
             set1.insert(s[j]);
            length++;
            j++;
           
        }

         
        if(max<length){
            max=length;
        };

        length=0;
        i++;
        set1.clear();
        }

        return max;

    }
};
