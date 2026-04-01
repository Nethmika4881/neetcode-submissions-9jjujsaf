class Solution {
public:
    int rob(vector<int>& nums) {
      int size = nums.size();
      vector<int> arr(size);

      arr[0]=nums[0];
      arr[1]=max(nums[0],nums[1]);
      for(int i = 2 ; i < size;i++){
        arr[i] = max(arr[i-2]+nums[i],arr[i-1]);

      }  

 
   
      return max(arr[size-1],arr[size-2]);
    }
};
