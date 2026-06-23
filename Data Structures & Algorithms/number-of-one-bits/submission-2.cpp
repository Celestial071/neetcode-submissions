class Solution {
public:
    int total = 0;
    int hammingWeight(uint32_t n) {
        for(int i = 0 ; i < 32; i++) {
            if(n & 1){
                total++;
                n = n >> 1;
            } else {
                n = n >> 1;
            }
        }
        return total;
    }
};
