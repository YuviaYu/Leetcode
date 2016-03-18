class Solution {
public:
    bool isHappy(int num) {
        int tmp = 0, res;
        do{
            res = 0;
            while(num != 0){
                tmp = num%10; 
                num = num/10; 
                res = res + tmp*tmp;
                }
            num = res;
        }while(res > 9);
        return res==1;
    }
};