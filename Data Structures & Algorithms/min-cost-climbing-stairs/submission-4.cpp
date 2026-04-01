class Solution {
public:
    unordered_map<int,int> m;
    int minCostClimbingStairs(vector<int>& cost) {
       int size = cost.size();

        for(int i=2;i<cost.size();i++){
            cost[i] = min(cost[i-1],cost[i-2]) + cost[i];
        }




        return min(cost[size-1],cost[size-2]);
    }
};
