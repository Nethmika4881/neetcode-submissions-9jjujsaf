class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            
            int j=0;
            int k=nums.size()-1;
            bool isCon = false;
            while(  j < k && !isCon){
               
                if(i==j) {
                    j++;
                    continue;
                }
                else if(i==k){
                    k--;
                    continue;
                }
                else if(nums[i] < (-1)*(nums[j]+nums[k])){
                    j++;
                    continue;
                }
                else if(nums[i] > (-1)*(nums[j]+nums[k]))
                {
                    k--;
                    continue;
                }

              
            
                else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                sort(temp.begin(), temp.end());
                arr.push_back(temp);
                j++;
                k--; 
              
            }
        }
        }

      
        set<vector<int>> set1(arr.begin(),arr.end());

        arr.clear();
        for(vector<int> i : set1){
                arr.push_back(i);
        }
        return arr;
    }
};
