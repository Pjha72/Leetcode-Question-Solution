class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        // base case
        if(nums.size() == 1){return true;}
        
        // set up counter and iterating the array
        int counter = 0;        
        for(int i=1; i<nums.size(); i++)
        {
            // if found decreasing 
            if(nums[i] < nums[i-1])
            {
                // increasing counter and check if counter bigger than 1(cannot fix->false)
                counter++;
                if(counter > 1){return false;}
                
                // check to see which index need to be change
                if(i-2 < 0 || nums[i-2] <= nums[i])
                {
                    nums[i-1] = nums[i];
                }
                else
                {
                    nums[i] = nums[i-1];
                }
            }
        }
        // return true if no decreasing order found
        return true;       
    }
};