class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map1;
        vector<int> arr(2);
        for(int i=0;i < nums.size();i++){
            int curr = target - nums[i];
            if(map1.find(curr) != map1.end()){
                arr[1] = i;
                arr[0] = map1[curr];
                break;
            }

            map1[nums[i]] = i;
        }

        return arr;
    }
};