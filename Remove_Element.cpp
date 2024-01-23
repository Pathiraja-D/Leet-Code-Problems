#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            return nums.size();
        }
    };


using namespace std;
int main()
{
    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution sl=Solution();
    cout << sl.removeElement(nums, val) << endl;
    return 0;
}