class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0,l = nums.size();
        vector<int> newnums;
        for(int i=0;i<l;i++){
            if(nums[i]!=0){
                newnums.push_back(nums[i]);
            }
            else{
                j = j + 1;
            }
        }
        while(j != 0){
            newnums.push_back(0);
            j = j - 1;
        }
        nums=newnums;
    }
};