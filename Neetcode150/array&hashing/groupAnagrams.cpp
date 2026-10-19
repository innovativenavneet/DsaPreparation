#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnargram(vector<string> &strs)
    {
        vector<vector<string>> result;
        vector<string> temp2;
        vector<bool> visited(strs.size(), false);
        for (string i : strs)
        {
            vector<char> temp(i.begin(), i.end());
            sort(temp.begin(), temp.end());
            string sortedString(temp.begin(), temp.end());
            temp2.push_back(sortedString);
        }

        for (int i = 0; i < strs.size(); i++)
        {
            if (visited[i])
                continue;

            vector<string> group;

            group.push_back(strs[i]);
            visited[i] = true;
            for (int j = i + 1; j < strs.size(); j++)
            {
                if (!visited[j] && temp2[i] == temp2[j])
                {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            result.push_back(group);
        }
        return result;
    }
    vector<vector<string>> optimalsol(vector<string> &strs)
    {
        vector<vector<string>> result;
        // lets initilize a map as key as sorted string and vector as each vecotr matching those string
        unordered_map<string, vector<string>> mp;
        for (auto i : strs)
        {
            string temp = i;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        for (auto &j : mp)
        {
            result.push_back(j.second);
        }
        return result;
    }
};

int main()
{
    vector<string> str = {"act", "pots", "tops", "cat", "stop", "hat"};
    Solution s;
    // vector<vector<string>> result = s.groupAnargram(str);
    vector<vector<string>> result = s.optimalsol(str);

    for (auto group : result)
    {
        cout << "[ ";
        for (string s : group)
        {
            cout << s << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
// Input: strs = ["act","pots","tops","cat","stop","hat"]
// Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]