class Solution {
public:
    int missingNum = 0;
    int missingNumber(vector<int>& nums) {
        int total = (nums.size()) * (nums.size() + 1)/2;
        int temp = 0;
        for(auto n : nums){
            temp += n;
        }
        missingNum = total - temp;
        return missingNum;
    }

    
};
