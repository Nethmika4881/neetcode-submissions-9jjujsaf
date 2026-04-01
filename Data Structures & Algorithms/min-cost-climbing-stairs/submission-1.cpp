class Solution {
public:
    unordered_map<int,int> m;
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> minCost(cost.size());

        minCost[0] = cost[0];
        minCost[1] = cost[1];

        for(int i=2;i<cost.size();i++){
            minCost[i] = min(minCost[i-1],minCost[i-2]) + cost[i];
        }

        for(int i : minCost){
            cout << i << endl;
        }


        return min(minCost[cost.size()-1],minCost[cost.size()-2]);
    }
};
