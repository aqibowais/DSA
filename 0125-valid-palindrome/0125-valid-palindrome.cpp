class Solution {
public:
    bool checkPalindrome(int i,string &s){
        if(i>=s.size()/2) return true;
        if(s[i]!=s[s.size()-i-1]) return false;
        return checkPalindrome(++i,s);
    }
    bool isPalindrome(string s) {
        string result;
        for(char c:s){
            if(isalnum(c)) result+=tolower(c);
        }

        
        if(result=="") return true;
        return checkPalindrome(0,result);
    }
};