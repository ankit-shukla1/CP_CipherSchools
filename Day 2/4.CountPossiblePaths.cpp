                                        /****** 5. Count Possible Paths*******/
using namespace std;
#include<bits/stdc++.h>

// Function to calculate the factorial of a number
int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    int ans =1;

    for(int i=2;i<=n;i++)
        ans*=i;

    return ans;
}

// Function to calculate all the possible paths from start to end using formula of combinatorics
int countPossiblePaths(int row, int column)
{
    return  ( (fact(row+column-2)) / ( fact(row-1) * fact(column-1) ) );
}



// Driver Code
int main()
{
    int r =2, c=3;
    cout<<countPossiblePaths(r,c);
    return 0;
}



                                                        /*****  @Ankit Shukla ****/

