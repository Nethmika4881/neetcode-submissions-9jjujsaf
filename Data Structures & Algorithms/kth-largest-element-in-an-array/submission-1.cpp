class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> q;

        for(int i : nums){
            q.push(i);
        }   


        int j=0;
        while(j<k-1){
            q.pop();
            j++;
        }


        return q.empty() ? 0 : q.top();
    }
};
