
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size = s1.size();

        unordered_map<char,int> m;
        unordered_map<char,int> m2;
        if(size > s2.size()) return false;

        // Count frequency of chars in s1
        for(char ch : s1){
            m[ch]++;
        }

        // Slide over s2
        for(int i = 0; i <= s2.size() - size; i++){
            bool isSame = true;
            // Count frequency of current substring
            for(char j : s2.substr(i, size)) {
                m2[j]++;   
            }

            // Compare maps
            for(auto pair: m){
                if(m2.find(pair.first) == m2.end() || m2[pair.first] != pair.second) {
                    cout << s2.substr(i, size) << endl; // Debug: print non-matching substring
                    isSame = false;
                    break; // No need to check further
                }
            }

            if(isSame){
                cout << "F " << s2.substr(i, size) << endl; // Debug: print matching substring
                return true;
            }

            m2.clear(); // Clear map for next substring
        }

        return false;
    }
};

