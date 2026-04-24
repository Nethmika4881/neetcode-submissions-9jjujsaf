class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> pq;

        vector<int> res;
        for(int i : nums){
            m[i]++;
        }

        for(auto p : m){
            pq.push({p.second,p.first});
        }


        for(int i=0;i<k;i++){
            int num = pq.top().second;
            pq.pop();
            res.push_back(num);
        }


        return res;


    }
};
