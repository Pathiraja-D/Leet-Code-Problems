#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<stdio.h>

using namespace std;

int removeElement(vector<int> nums, int val) {
            nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            return nums.size();
        };

int main()
{
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout << removeElement(nums, val) << endl;
    return 0;
}