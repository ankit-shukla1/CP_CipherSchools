                                     /**********  Trapping Rainwater************/


using namespace std;
#include<bits/stdc++.h>



// Function to calculate the total water that can be trapped
int trappingRainwater(const vector<int>& v)
{
    int n = v.size();

    vector<int> leftMax(n);
    vector<int> rightMax(n);

    leftMax[0]=v[0];                     // Initializing the leftMax array
    rightMax[n-1] = v[n-1];             // Initializing the rightMax array

    for(int i=1;i<n;i++)                                    // Filling the left arrays
        leftMax[i] = max(v[i], leftMax[i-1]);

    for(int i=n-2;i>=0;i--)                             // Filling the right array
        rightMax[i] = max(v[i], rightMax[i+1]);

    int result=0;

    for(int i=0; i<n; i++)
    {
        result += (min(leftMax[i],rightMax[i])-v[i]);        // calculating the result value
    }

    return result;
}

int main()
{
    vector<int> v ={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<trappingRainwater(v);
    return 0;
}

                                             /******** @Ankit Shukla ********/

