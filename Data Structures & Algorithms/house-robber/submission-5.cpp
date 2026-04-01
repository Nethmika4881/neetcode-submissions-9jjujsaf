class Solution {
public:
    int rob(vector<int>& nums) {
      vector<int> arr(nums.size());

      arr[0]=nums[0];
      arr[1]=max(nums[0],nums[1]);
      for(int i = 2 ; i < nums.size();i++){
        arr[i] = max(arr[i-2]+nums[i],arr[i-1]);

      }  


      for(int i : arr){
        cout << i << endl;
      }
   
      return max(arr[nums.size()-1],arr[nums.size()-2]);
    }
};
