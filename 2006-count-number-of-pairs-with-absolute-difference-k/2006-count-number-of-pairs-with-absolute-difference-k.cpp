class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int length = nums.size();
        int count =0;
        for(int i =0; i<length; i++)
        {
            for(int j =i+1; j<length; j++)
            {
                int s = nums[i] - nums[j];
                if(s<0)
                {
                    s = -s;
                }
                
                if(i<j && s == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

