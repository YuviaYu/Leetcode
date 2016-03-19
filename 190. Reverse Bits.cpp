class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for(int i=0;i<32;i++){
            //get the i-th number and sum them
            res = res + ((n>>i & 1)<<(31-i)); 
        }
        return res;
    }
};
