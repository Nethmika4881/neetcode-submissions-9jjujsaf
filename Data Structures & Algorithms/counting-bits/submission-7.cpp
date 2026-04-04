class Solution {
public:


    int count (int n){
        int count = 0;
        
        while(n){
            n = n & (n-1);// remove the right most bit like if i gave : 12 & 11 ->  1010 & 1011 -> 1010 .so the right most bit of 12 (1010) has removed.we loop this opetration until all the bits are become 0 (0000)
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
