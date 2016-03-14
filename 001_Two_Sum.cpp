//复杂度O(n的平方)，超时
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int l = nums.size();
        for(int j=0;j<l-1;j++){
            for (int i=j+1;i<l;i++){
                if (nums[i]+nums[j]==target && nums[i]<=nums[j]){
                    ret.push_back(i);
                    ret.push_back(j);
                }
                if (nums[i]+nums[j]==target && nums[i]>nums[j]){
                    ret.push_back(j);
                    ret.push_back(i);
                }
            }
        }
        return ret;
    }
};

//map 键-值对应,vector不用sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> nums_key;
    vector<int> ret;
    for (int i=0;i<nums.size();i++){
        nums_key[nums[i]] = i;
    }
    for (int i=0;i<nums.size();i++){
        int minus=target-nums[i];
        if(nums_key.find(minus)!=nums_key.end() && nums_key[minus]>i){
            ret.push_back(i);
            ret.push_back(nums_key[minus]);
            break;      //assume that each input would have exactly one solution.
        }
    }
    return ret;
    }
};