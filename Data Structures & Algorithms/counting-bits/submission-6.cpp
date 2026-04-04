class Solution {
public:


    int count (int n){
        int count = 0;
        
        while(n){
            n = n & (n-1);// remove last bit
            count++;
        }

        return count;
    }
    vector<int> countBits(int n) {
        vector<int> arr;
       
        for(int i=0;i<n+1;i++){
            arr.push_back(count(i));
        }


        return arr;
    }
};
