class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;

        vector<int> res(2);
       
        for(int i=0;i<nums.size();i++){
            int curr = target  - nums[i];
            if(m.find(curr) != m.end()){
                    res[1] = i;
                    res[0] =  m[curr];
                    break;      
            }


            m[nums[i]] = i;
        }
        

        return res;
    }
};
