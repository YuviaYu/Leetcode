class Solution {
public:
    int titleToNumber(string s) {
        int tmp;
        int res = 0;
        for(int i=0;i<s.length();i++){
            tmp = s[i]-64; //ASCII:A 65
            res = res * 26 + tmp;
        }
        return res;
    }
};