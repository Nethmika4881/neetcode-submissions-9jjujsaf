#include <stack>
class Solution {
public:
    bool isPalindrome(string s) {

       vector<char> arr;
       for(char i : s){
        if(i!= ' ' && isalnum(i)){
        arr.push_back(tolower(i));   
        }
       }

        int i=0;
       int j=arr.size()-1;
       while(i < j){
          cout <<  arr[i] << arr[j] << endl;
            if(i==j) return true;
            if(arr[i] != arr[j]) return false;
           
            i++;
            j--;
       }


       return true;
    }
};
