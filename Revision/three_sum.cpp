#include <bits/stdc++.h>

using namespace std;

class A
{
public:

    vector<vector<int>> three_sum(vector<int> arr, int n, int target)
    {
        vector<vector<int>> result;

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1]) continue;
            int left = i + 1;
            int right = n - 1;
            //by doing this we made it the problem of 2 sum 
            int need = target - arr[i];
            while (left < right)
            {
                int sum = arr[left] + arr[right];

                if (sum == need)
                {
                    result.push_back({arr[i], arr[left], arr[right]});// our work has been done till now for first three pairs 
                    
                    //below two while loops are neccessary to remove duplicate pairs 
                    while (left < right && arr[left] == arr[left+1]){left++;}
                    while (left<right && arr[right]==arr[right-1] ){right--;}
                    
                    left++;
                    right--;
                }
                else if (sum < need)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        return result;
    }

    void print_result(vector<vector<int>> result)
    {
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    A a;

    vector<int> arr = {1,1,1,2,2};

    int size = arr.size();

    int target = 5;

    vector<vector<int>> result = a.three_sum(arr, size, target);

    a.print_result(result);

    return 0;
}