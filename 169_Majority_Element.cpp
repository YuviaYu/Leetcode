//��ͬ��������ɾ�������µļ�Ϊ���ִ�������n/2����
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res,count = 0;
	k = nums.size();
        for(int i = 0;i<k;i++){
            if(count == 0){
                res = nums[i];
                count = 1;
            }
            else{
                if(res == nums[i]){count++;}
		else{ count--;}           
            }
        }
        return res;
    }
};