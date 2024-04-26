class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int length = nums.size();
        int count =0;
        for(int i=0; i<length; i++)
        {
            for(int j =i+1; j<=length-1; j++)
            {
                
                    int s = nums[i] + nums[j];
                    if(s<target)
                    {
                        count++;
                    }
                
            }
        }
        return count;
    }
};