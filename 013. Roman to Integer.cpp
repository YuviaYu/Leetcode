class Solution {
public:
    int getInt(char a){
    switch (a) {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
    }
    
    int romanToInt(string s) {
        int res = 0;
        char cur = 'I';
        for(int i = s.size()-1;i>=0;i--){
            if(getInt(s[i])>=getInt(cur)){
                res = res + getInt(s[i]);
            }else{
                res = res - getInt(s[i]);
            }
            cur = s[i];
        }
        return res;
    }
};