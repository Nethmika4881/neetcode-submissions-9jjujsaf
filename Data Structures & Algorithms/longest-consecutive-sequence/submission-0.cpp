class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map1;

        for(int i=0;i<nums.size();i++){
            map1[nums[i]]++;
        }

        int maxLength = 0;

        for(int i : nums){
            if(map1.find(i-1)!=map1.end()) continue;
            int length=0;
            if(map1.find(i)!=map1.end() && map1[i] > 0){
                length=1;
                int curr = i+1;
                while(map1.find(curr)!=map1.end()){
                    map1[curr]--;
                    length++;
                    curr++;
                }

                if(maxLength < length){
                    maxLength = length;
                }
            }
        }


        return maxLength;
    }
};
