class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        priority_queue<pair<int,int>> q;
        for(int i : nums){
            map1[i]++;
        }

        for(auto pair : map1){
            q.push({pair.second,pair.first});
        }
        vector<int> results;

       for(int i=0;i<k;i++){
            results.push_back(q.top().second);
            q.pop();
        }


        return results;
    }
};
