                                     /**********  Search In a Sorted Rotated Array ************/

#include<bits/stdc++.h>
using namespace std;


// Normal Implementation of binary search
int binarySearch(const vector<int> &v,int start, int end, int key)
{
    if(end<start)
        return -1;

    int mid = start + (end - start)/2;

    if(v[mid]==key)
        return mid;

    if(v[mid]>key)
        return binarySearch(v,start,mid-1,key);


        return binarySearch(v,mid+1,end,key);

}


// finding the pivot element
int findPivot(const vector<int>& v,int start, int end)
{
    if(end<start)
        return -1;

    if(end==start)
        return start;

    int mid = start + (end-start)/2;

    if(mid<end && v[mid]>v[mid+1])
        return mid;

    if(mid>start && v[mid]<v[mid-1])
        return mid-1;

    if(v[mid]>v[start])
        return findPivot(v,mid+1,end);

        return findPivot(v,start,mid-1);


}


// function to search in a sorted rotated array
int searchSortedRotated(const vector<int>& v, int key)
{
    int start=0,end=v.size()-1;
    int pivot = findPivot(v,start,end);

    if(pivot==-1)                                // If the array is sorted
        return binarySearch(v,start,end,key);

    if(v[pivot]==key)                         // if key is pivot element only
        return pivot;

    if(v[0]<=key)                                  // if start is less than the key then element is present before pivot
    {
        return binarySearch(v,0,pivot-1,key);
    }

    return binarySearch(v,pivot+1,end,key);         // if start is more then element is present after pivot.

}


// Driver Code
int main()
{
    vector<int> v = {3,4,5,1,2};

    int ans = searchSortedRotated(v,1);
    cout<<ans<<"\n";

    return 0;
}


                                             /******** @Ankit Shukla ********/

