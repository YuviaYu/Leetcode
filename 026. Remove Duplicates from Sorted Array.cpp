class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        if(nums.size()<=1){
            return nums.size();
        }else
        {
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=nums[j-1]){
                    nums[j] = nums[i];
                    j = j + 1;
                }
            }
        }
        
        return j;
    }
};