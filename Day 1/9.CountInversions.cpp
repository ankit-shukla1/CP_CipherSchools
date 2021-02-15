                                     /**********  Alternate Sorting************/
using namespace std;
#include<bits/stdc++.h>



// Function to count the number of inversions in an array
int countInversion(const vector<int>& v)
{
    int n = v.size();
    int count=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n; j++)
        {
            if(v[i]>v[j])                                    // if the number is greater than any number on it's reight then,
                count++;                                     // increase count of inversions
        }
    }

    return count;
}


int main()
{

    vector<int> v = {8, 4, 2, 1};
    cout<<countInversion(v);
    return 0;
}

                                             /******** @Ankit Shukla ********/

