                                            /****** Count all decodings of a Digit Sequence*******/

using namespace std;
#include<bits/stdc++.h>


// Helper Function to count all the decodings
int countDecodingsHelper(string s, int len)
{
    if(len == 1 || len == 0)                  // base case
        return 1;

    int res=0;

    if(s[len-1] > '0')                          // explicitly handling the 0 case
        res+=countDecodingsHelper(s,len-1);

    if((s[len-2] == '1' || s[len-2] == '2') && s[len-1] <'7')
       res+=countDecodingsHelper(s,len-2);

    return res;
}


// Function to calculate all the Decodings
int countDecodings(string s)
{
    int len = s.length();

    if(len ==0)
        return 0;
    if(len ==1)
    {
        if(s[0]=='0')
            return 0;
        else if(s[0]> '0' && s[0] < '27')
            return 1;
    }

    int ans = countDecodingsHelper(s,len);
    return ans;
}


// Driver Code
int main()
{
    string s = "1234";
    cout<<countDecodings(s);
    return 0;
}

                                                        /*****  @Ankit Shukla ****/


