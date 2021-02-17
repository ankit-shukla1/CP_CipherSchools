                                            /****** Count Trailing Zeros In Factorial*******/


using namespace std;
#include<bits/stdc++.h>



// Function to calculate the trailing zeros in n factorial
int countTrailingZeros(int n)
{
    if(n<=4)                  // base case
        return 0;

    return (n/5) + countTrailingZeros(n/5);        // repeatedly dividing by 5

}


// Driver Code
int main()
{
    int n=100;
    cout<<countTrailingZeros(n);
    return 0;
}

                                                        /*****  @Ankit Shukla ****/
