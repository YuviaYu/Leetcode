
//power of three
class Solution {
public:
    bool isPowerOfThree(int n) {
        int k = n%3;
        while(k==0 && n != 1 && n > 0){
            n = n/3;
            k = n%3;
        }
        return n == 1;
    }
};


//power of two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && (n & n-1) == 0; //positive and binary system;
    }
};

