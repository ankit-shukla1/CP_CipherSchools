                                     /**********  Find the missing number ************/
using namespace std;
#include<bits/stdc++.h>


// Function to find the missing number from 1 to n+1 in an array
int findMissingNumber(const vector<int>& v)
{
    int x = v[0];               // initializing the result with the first element
    int n = v.size();

    for(int i=1;i<n;i++)           // xor of all element in the array as well as all number from 1 to n-1
    {
        x =  x ^ v[i] ^ i;
    }

    x = x^ n^(n+1);                 // xor of the result with n and n+ to get the result

    return x;
}



int main()
{

    vector<int> v = {1, 2, 4, 6, 3, 7, 8};
    cout<<findMissingNumber(v);
    return 0;
}

                                             /******** @Ankit Shukla ********/
