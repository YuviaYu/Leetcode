class Solution {
public:
    int addDigits(int num) {
        int tmp = 0, res;
        if(num == 0){
            return num;
        }else
        {
                do{
                    res = 0;
                    while(num != 0){
                        tmp = num%10; //����
                        num = num/10; //��
                        res = res + tmp;
                    }
                    num = res;
                }while(res > 9);
                return res;
        }
    }
    
};