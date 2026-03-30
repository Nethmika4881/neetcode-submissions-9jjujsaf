class Solution {
public:

    string encode(vector<string>& strs) {
         
        string encoded = "";
        for(string w : strs){
              encoded += (to_string(w.length())+"#"+w);
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> arr;
        int i = 0 ;
        int j;
        while(i < s.length()){
            j = i;
            while(s[j] != '#'){
                j+=1;
            }


            int size = stoi(s.substr(i,j-i));
             i = j+1;

            string word = s.substr(i,size);

            arr.push_back(word);

            i+=size;
        }


        return arr;

    }
};
