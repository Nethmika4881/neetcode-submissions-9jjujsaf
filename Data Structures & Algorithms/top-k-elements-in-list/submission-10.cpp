class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<int> arr;
        vector<int> results;
        for(int i : nums){
            map1[i]++;
        }

        for(auto pair : map1){
            arr.push_back(pair.second);
        }

        sort(arr.begin(),arr.end());

        int minCount = arr[arr.size()-k];

        for(auto pair : map1){
            if(pair.second >= minCount){
            results.push_back(pair.first);
            }
        }


        return results;
    }
};
