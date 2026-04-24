class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i: nums){
            m[i]++;
        } 
        
        int mL = 0;

        for(int i : nums){
            int temp = i;
            if(m.find(temp-1) != m.end()){
                continue;
            }

            int length = 1;
            temp++;
            while(m.find(temp)!=m.end() && m[temp] > 0){
               
                length++;
                m[temp]--;
                 temp++;

            }


            if(mL < length){
                mL = length;
            }
           }


           return mL;
    }
};
