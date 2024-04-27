class Solution {
public:
    int countSetBits(int nums) {
    int count = 0;
    while (nums) {
        count += nums & 1;
        nums >>= 1;
    }
    return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int length = nums.size();
        int sum = 0;
        for(int i =0; i<length; i++)
        {
            if(countSetBits(i) == k)
            {
                sum += nums[i];
            }
        }
        return sum;
        
    }
};