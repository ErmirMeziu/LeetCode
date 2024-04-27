class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int length = nums.size();
        int SumOfNums =0;
        int SumOfDigits =0;
        for(int i =0; i< length; i++)
        {
            SumOfNums +=nums[i];
            while(nums[i]!=0)
              {
                  SumOfDigits +=nums[i]%10;
                  nums[i] /=10;
              }
         
        }
        
        return SumOfNums- SumOfDigits; 
    }
};