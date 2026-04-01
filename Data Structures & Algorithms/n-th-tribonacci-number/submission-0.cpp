class Solution {
public:
    unordered_map<int,int> m;
    int tribonacci(int n) {
        if(n==0 || n==1 ){
            return n;
        }
        if(n==2){
            return 1;
        }


    return tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);

    }
};