                                     /*********** Find Peak Element ************/

using namespace std;
#include<bits/stdc++.h>



// Modified Binary Search to find the peak element


int modifiedBinary(const vector<int>& v, int start, int end, int n)
{
    int mid = start + (end - start)/2;          // calculating the mid

    // checking if the mid satisfies the condition of peak element

    if( (mid==0 || v[mid-1] <= v[mid])  && (mid==n-1 || v[mid+1]<=v[mid]) )
        return mid;



    // if left neighbor is greater, then we can search in the left side

    else if(mid>0 && v[mid-1] > v[mid])
        modifiedBinary(v,start,mid-1,n);



    // if right neighbor is greater then we can search in the right side.
    else
        modifiedBinary(v,mid+1,end,n);
}


// function to get the peak element
int findPeak(const vector<int>& v)
{
    int n = v.size();

    int res = v[modifiedBinary(v,0,n-1,n)];

    return res;
}

int main()
{
    vector<int> v ={5, 10, 20, 15};
    cout<<findPeak(v);
    return 0;
}



                                             /******** @Ankit Shukla ********/

