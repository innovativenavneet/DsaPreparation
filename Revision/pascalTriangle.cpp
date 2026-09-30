#include <bits/stdc++.h>
using namespace std;

class Pascle
{
public:
    vector<vector<int>> solution(int rows)
    {
        // initializer
        //  for final answer
        vector<vector<int>> ans;

        // looping to get the ans
        for (int i = 0; i < rows; i++)
        { // array to store rows
            vector<int> row;
            // we know that in pascle triangle first element is a row
            row.push_back(1);

            // inner loop for middle element storage
            //  strating with 1st element
            for (int j = 1; j < i; j++)
            {
                row.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            if (i > 0)
            {
                row.push_back(1);
            }
            // print current row
            for (int j = 0; j < row.size(); j++)
            {
                cout << row[j] << " ";
            }
            cout << endl;
            ans.push_back(row);
        }
        return ans;
    }
};

int main()
{
    Pascle p;
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    cout << endl;
    p.solution(rows);
}