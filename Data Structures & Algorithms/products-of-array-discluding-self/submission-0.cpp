class Solution {
public:
    vector<int> productExceptSelf(vector<int>  nums) {
        
        vector<int> arr;
        int zeroIndex = -1;
        int zeroCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                zeroCount++;
            
                zeroIndex = i;
            }
        }

        if(zeroCount > 1){
            for(int i=0;i<nums.size();i++){
                nums[i] = 0;
            }
        }
        else if(zeroCount == 1){
            int mult=1;
            for(int i=0;i<nums.size();i++){
                if(i != zeroIndex){
                    mult *= nums[i];
                }   
            }

            cout << mult << endl;
            for(int i=0;i<nums.size();i++){
                if(i == zeroIndex){
                    nums[i] = mult;
                }
                else{
                nums[i] = 0;
                }
            }  
        }
        else if(zeroCount == 0){
            int mult=1;
            for(int i : nums){
                mult *= i;
            }

            for(int i=0;i<nums.size();i++){
                nums[i] = mult / nums[i];
            }
        }

       


        return nums;
    }
};
