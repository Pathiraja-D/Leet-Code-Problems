#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<stdio.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return nums.size();
};

int main()
{
    vector<int> nums = {3,2,2,3};
    cout << removeDuplicates(nums) << endl;
    return 0;
}