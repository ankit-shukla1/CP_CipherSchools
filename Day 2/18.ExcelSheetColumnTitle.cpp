                                        /****** Excel Sheet Column Title *******/


using namespace std;
#include<bits/stdc++.h>


// Function to convert the given number to corresponding string
string convertToTitle(int n)
{

    string s="";

    while (n>0)
    {
            n--;                           // reducing by one to adjust for when %26 gives 0
            s = char('A' + (n%26)) + s;      // adding the result first, to avoid the reversal of string
            n/=26;
    }

    return s;
}


// Driver Code
int main()
{
    int n =701;
    cout<<convertToTitle(n);
    return 0;
}

                                                        /*****  @Ankit Shukla ****/

