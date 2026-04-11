class Solution {
public:
    vector<int> parent;

    int rootFind(int n){
        if(parent[n] < 0) return n;
        return rootFind(parent[n]);
    }

    bool unit(int a,int b){
        int rootA = rootFind(a);
        int rootB = rootFind(b);

        if(rootA == rootB) return false;
        if(parent[rootA] > parent[rootB]){
            swap(rootA,rootB);
        }

        parent[rootA] += parent[rootB];
        parent[rootB] = rootA;
        return true;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        int components = n;
        parent.assign(n,-1);
        for(vector<int>&edge : edges){
            if(unit(edge[0],edge[1])){
                components--;
            }
        }

        return components;
    }
};
