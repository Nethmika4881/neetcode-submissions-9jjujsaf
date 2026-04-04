class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;

        for(int i : stones){
            q.push(i);
        }

        while(q.size()>1){
            int top1 = q.top();
            q.pop();
            int top2=  q.top();
            q.pop();

            if(top1 == top2) continue;
            if(top1 > top2) {
                q.push(top1-top2);
                continue;
            }
        }

        return q.empty() ? 0 : q.top();
    }
};
