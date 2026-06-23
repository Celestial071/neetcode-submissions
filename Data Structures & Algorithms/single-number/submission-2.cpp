class Solution {
public:
    int nr = 0;
    int singleNumber(vector<int>& nums) {
        for(auto num: nums) {
            nr ^= num;
        }
        return nr;
    }
};
