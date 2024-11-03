class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        // return (s+s).find(goal) != string::npos;

        //another approach
        for(int i=0;i<s.length();i++){
            if(s==goal) return true;
            s = s.substr(1)+s[0];
        }
        return false;

    }
};