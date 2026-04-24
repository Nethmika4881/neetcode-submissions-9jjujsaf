class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int size  = nums.size();
      vector<int> prefix(size);
      vector<int> sufix(size);
      vector<int> results(size);

      prefix[0] = 1;
      sufix[size-1] = 1;


      int i = 1;
      int j = size-2;


      while(i < size){
        prefix[i] = prefix[i-1] * nums[i-1];
        i++;
      }


      while(j > -1){
        sufix[j] =  sufix[j+1] * nums[j+1];
        j--;
      }

     for(int i : sufix){
        cout << i << " " ;
     }
      for(int i = 0;i<nums.size();i++){
        results[i] = sufix[i] * prefix[i];
      }


      return results;
    }
};
