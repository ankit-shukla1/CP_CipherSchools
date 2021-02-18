                                        /******5. Last Non-Zero Digit Of A Factorial *******/


using namespace std;
#include<bits/stdc++.h>

// Storing the unit digits in n! from 0 to 9 to be accessed globally
vector<int> unitDigits = {1,1,2,6,4,2,2,4,2,8};


// Function to calculate the last non -zero digit in n!
int countNonZeroDigit(int n)
{
    if(n<=9)                                 // if the number is less than 10 then directly accessing the value from the vector.
        return unitDigits[n];

    int t = ((n/10)%10);                    // getting the second last digit of n

    if(t&1)                                                                     // if the number is odd
        return (4 * countNonZeroDigit(n/5) * countNonZeroDigit(n%10)) %10;
    else                                                                         // if the number is even
        return (6 * countNonZeroDigit(n/5) * countNonZeroDigit(n%10)) %10;
}



//Driver Code
int main()
{
    int n=14;
    cout<<countNonZeroDigit(n);
    return 0;
}


                                                        /*****  @Ankit Shukla ****/
