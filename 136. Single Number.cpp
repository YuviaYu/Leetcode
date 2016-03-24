class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        //exclusive OR
        //a^b=b^a, 0^a=a
        for(int i=0;i<nums.size();i++){
            res = res ^ nums[i];
        }
        return res;
        
    }
};