#include<algorithm>
#include<vector>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/2);
        int maxNum = 0;
        int element=nums[0];
        for(int i=0;i<nums.size();i++)
        {
           int value = count(nums.begin(),nums.end(),nums[i]);
            if(value>maxNum)
            {
                maxNum=value;
                element = nums[i];

            }
        }
        return element;

    }
};