class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2 !=0 ) return false;
        unordered_map<char,char> m = {{'}','{'},{ ']','['},{')','('}};
       
        if(m.find(s[s.length()-1])==m.end()) return false;
        stack<char> st;
       
       
        for(char i : s){      
          if(m.find(i)!=m.end()) {     
            if(st.empty() || st.top() != m[i]){
                return false;
                }
             st.pop();
            }

          else{
                st.push(i);
            }
        }

        return st.empty();
    }
};
