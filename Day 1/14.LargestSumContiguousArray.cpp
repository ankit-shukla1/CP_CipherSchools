                                     /**********  Largest Sum Contiguous Array ************/

using namespace std;
#include<bits/stdc++.h>

// function to get the largest sum subarray
int largestSumSubarray(const vector<int>& v)
{
    int currMax=v[0];         // initializing the current maximum sum with the first element.
    int allMax = v[0];         // initializing the global maximum sum with first element.

    for(int i=1; i<v.size();i++)
    {
        currMax = max(currMax+v[i], v[i]);         // choosing the maximum between the current element and current sum + current element
        allMax = max(currMax, allMax);              // choosing the maximum between current maximum and global maximum
    }

    return allMax;
}


// Driver Code
int main()
{
    vector<int> v ={-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<largestSumSubarray(v);
    return 0;
}

                                             /******** @Ankit Shukla ********/


