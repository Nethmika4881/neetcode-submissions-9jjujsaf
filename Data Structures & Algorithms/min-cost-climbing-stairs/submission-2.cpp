class Solution {
public:
    unordered_map<int,int> m;
    int minCostClimbingStairs(vector<int>& cost) {
       

        for(int i=2;i<cost.size();i++){
            cost[i] = min(cost[i-1],cost[i-2]) + cost[i];
        }

        for(int i : cost){
            cout << i << endl;
        }


        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};
