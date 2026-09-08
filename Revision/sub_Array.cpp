/*A subarray is a contiguous part of an array, meaning its elements appear consecutively in their original relative order.
For an array of size n, there are \(\frac{n(n+1)}{2}\) non-empty subarrays. For example, given [1, 2, 3],
the contiguous subarrays are [1], [2], [3], [1, 2], [2, 3], and [1, 2, 3]*/

#include<iostream>
#include<vector>
using namespace std;

//brute force approach (T.c = O ^ 3)
class SubArray
{
public:
 void subarray(vector<int> arr){
    int n = arr.size();
    //outer loop
    for ( int i = 0; i < n; i++)
    {
        //for outer boundary
        for (int j = i; j < n; j++)
        {
            cout<<"[";
            for(int k=i; k<=j ; k++){
              cout<<arr[k];
            }
        cout<<"]\n";

        }
        
    }
    

 }
};

int main(){
    SubArray a;
    vector<int>arr={1,2,3};
    a.subarray(arr);
    return 0;
}