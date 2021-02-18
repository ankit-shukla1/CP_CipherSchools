                                        /****** 17. LeetCode#62 Unique Paths*******/

using namespace std;
#include<bits/stdc++.h>

// Function to calculate the number of unique paths in m*n board
int uniquePaths(int m, int n)
 {
    long long  int res = 1;            // declaring as long long int because there is a chance of integer overflow

    for (int i = n; i < (m + n - 1); i++)         // Calculating (m+n-2)!/(m-1)!(n-1)!
    {
        res *= i;
        res /= (i - n + 1);
    }
    return res;

}




// Driver Code
int main()
{
    int r =2, c=3;
    cout<<uniquePaths(r,c);
    return 0;
}

                                                        /*****  @Ankit Shukla ****/
