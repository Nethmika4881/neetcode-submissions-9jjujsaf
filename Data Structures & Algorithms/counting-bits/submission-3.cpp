class Solution {
public:


    int count (int n){
        int count = 0;
        int length =  floor(log2(n)) + 1;
       for(int i=0;i<length+1;i++){
         if(n &(1<<i))
        {
            count++;
        } 
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
