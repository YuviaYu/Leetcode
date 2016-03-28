class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool res = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]&&nums.size()!=1){
                res = true;
            }
        }
        return res;
    }
};