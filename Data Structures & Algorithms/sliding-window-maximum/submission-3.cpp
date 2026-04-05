class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        
        int j=0;
        vector<int> results;
        while(j<k){
           q.push({nums[j],j});
           j++;
        }

        results.push_back(q.top().first);
        int i=j;
        while(i < nums.size()){ 
            while(!q.empty() && q.top().second <= i-k){
            q.pop();
                }

           q.push({nums[i],i});

           results.push_back(q.top().first);
            i++;
        }

        return results;
    }
};
