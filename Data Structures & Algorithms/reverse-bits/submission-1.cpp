class Solution {
public:
    uint32_t solution = 0;
    uint32_t reverseBits(uint32_t n) {
        for(uint32_t i = 0; i < 32; i++) {
            solution <<= 1;
            solution |= (n&1);
            n >>= 1;
        }
        return solution;
    }
};
