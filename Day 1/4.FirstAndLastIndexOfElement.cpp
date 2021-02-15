                                     /*********** Find First and Last Index of Element in A Sorted Array************/

using namespace std;
#include<bits/stdc++.h>



// Function to find the first occurrence of the element
int firstIndex(const vector<int>& v, int x)
{
    int start=0,end =v.size()-1;
    int firstResult =-1;


    // Iterative Binary Search, with a single modification
    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(v[mid]==x)
        {
            firstResult = mid;     // Modified line that if mid is found then store the result and move to left side
            end = mid-1;
        }
        else if(v[mid]>x)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }

    }

    return firstResult;
}



// Function to find the last occurrence of an element
int lastIndex(const vector<int>& v, int x)
{
    int start=0,end =v.size()-1;
    int lastResult =-1;


    // Iterative binary search with a single modification
    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(v[mid]==x)
        {
            lastResult = mid;         // Modified line that if element is found then move to right side.
            start= mid+1;
        }
        else if(v[mid]>x)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }

    }

    return lastResult;
}



// Function to get the first and last occurrence of an element
void firstAndLastIndex(const vector<int> &v, int x )
{
    int firstResult = firstIndex(v,x);
    int lastResult = lastIndex(v,x);

    cout<<"First Index : "<<firstResult<<"\n";
    cout<<"Last Index : "<<lastResult<<"\n";
}


// Driver Code
int main()
{
    vector<int> v = {1,2,3,5,5,7};
    firstAndLastIndex(v,5);
    return 0;
}

                                             /******** @Ankit Shukla ********/

