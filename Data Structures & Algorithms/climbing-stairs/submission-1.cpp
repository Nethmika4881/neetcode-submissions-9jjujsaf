class Solution {
public: 
    unordered_map<int,int> map1;
    int climbStairs(int n) {
        if(map1.find(n) != map1.end()) return map1[n];
        if(n==1 || n==2){
            return n;
        }
        int result =  climbStairs(n-1)+climbStairs(n-2);
        map1[n] = result;

        return result;
    }
};