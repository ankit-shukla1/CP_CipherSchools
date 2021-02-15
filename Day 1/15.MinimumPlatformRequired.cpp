                                     /**********  Minimum Number of Platform Required************/
using namespace std;
#include<bits/stdc++.h>


// Function to calculate the minimum number of platforms required
int minimumPlatforms(vector<int>& arr, vector<int>& dep)
{
    sort(arr.begin(), arr.end());      // Sorting the two arrays
    sort(dep.begin(), dep.end());

    int res=1,curr=1;              // initializing the result
    int i=1,j=0;

    int n = arr.size();

    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])             // if the departure is greater than arrival of next train increase the number of platforms
            curr++,i++;
        else                            // if not then decrease the number of platforms
            curr--,j++;

        res = max(curr,res);          // update the result


    }

    return res;
}


// Driver Code
int main()
{
    vector<int> arr ={900, 940, 950, 1100, 1500, 1800};
    vector<int> dep ={910, 1200, 1120, 1130, 1900, 2000};

    cout<<minimumPlatforms(arr,dep);
    return 0;
}

                                             /******** @Ankit Shukla ********/

