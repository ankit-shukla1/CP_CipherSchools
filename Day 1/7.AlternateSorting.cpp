                                     /**********  Alternate Sorting************/
using namespace std;
#include<bits/stdc++.h>


// function for printing alternate maximum and minimum elements
void alternateSorting(vector<int> &v)
{
    sort(v.begin(), v.end());            // Sorting the elements

    int i=0,j=v.size()-1;

    while(i<j)
    {
        cout<<v[j]<<" "<<v[i]<<" ";                 // printing the two elements
        i++,j--;                                     // adjusting the pointers
    }

    if(v.size()&1)                          // if the number of elements is odd then code to print the middle element
        cout<<v[i];
}


int main()
{
    vector<int> v ={1,2,3,4,5};
    alternateSorting(v);
    return 0;
}

                                             /******** @Ankit Shukla ********/

