#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
        {
            return false;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    // vector<int> nums = {1, 2, 3, 4};
    vector<int> nums = {1, 2, 3, 3};
    Solution s;
    bool ans = s.hasDuplicate(nums);
    if (ans == 1)
    {
        cout << "the result contains duplicate value ";
    }
    else
    {
        cout << "the result doesn't contains duplicate value";
    }

    return 0;
}