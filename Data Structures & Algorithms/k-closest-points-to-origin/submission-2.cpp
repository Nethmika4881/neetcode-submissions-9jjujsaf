class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
     for(int i=0;i < points.size(); i++){
        q.push({(points[i][0]*points[i][0] + points[i][1]*points[i][1]),i});
     }   

     vector<vector<int>> res;
     for(int i=0;i<k;i++){
        res.push_back(points[q.top().second]);
        q.pop();
     }
     return res;
    }
};
