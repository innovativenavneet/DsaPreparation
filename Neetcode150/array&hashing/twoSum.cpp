#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twosum(vector<int> nums, int target)
    {
        vector<int> result = {};
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 5, 5, 11};
    int target = 10;
    vector<int> result = s.twosum(nums, target);
    for (size_t i = 0; i < result.size(); i++)
    {
        /* code */
        cout << result[i] << endl;
    }

    return 0;
}