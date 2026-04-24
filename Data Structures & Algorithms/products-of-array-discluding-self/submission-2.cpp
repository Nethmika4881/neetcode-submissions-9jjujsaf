class Solution {
public:
    vector<int> productExceptSelf(vector<int>  nums) {
        
        int size  = nums.size();
         
        vector<int> pref(size);
        vector<int> suf(size);
        vector<int> result(size);

        pref[0] = 1;
        suf[size-1]=1;

        int i = 1;
        int j =size-2;


        while(i<size){
            pref[i] = pref[i-1] * nums[i-1];
            i++;
        }

        while(j>-1){
            suf[j] = suf[j+1] * nums[j+1];
            j--;
        }

        for(int i = 0;i < size;i++){
            result[i] = pref[i] * suf[i];
        }

       


        return result;
    }
};
