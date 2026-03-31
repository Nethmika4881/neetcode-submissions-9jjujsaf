class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        for(int i=0;i<prices.size(); i++){
            for(int j=i+1;j<prices.size();j++){
                if(i==j) continue;
                int p = prices[j]-prices[i];
                if( p > max){
                    cout <<  max << endl;
                    max = p;
                }
            }
        }

        return max;
    }
};
