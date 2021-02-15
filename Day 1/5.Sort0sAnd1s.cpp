                                     /*********** Sort a BInary Array in Single Traversal************/

using namespace std;
#include<bits/stdc++.h>


// Function to sort a binary array in a single iteration
void sortZeroesAndOnes(vector<int>& v)
{
    int zp=0,op=v.size()-1;         // Initializing two pointers one pointing to number of ones, other to number of zeroes

    while(zp<op)
    {
        switch(v[zp])
        {
        case 0 :                   // if the current element is zero, increase the zero pointer
            zp++;
            break;
        case 1:                    // if the current element is one then swap the elements and decrease the one pointer.
            swap(v[zp], v[op]);
            op--;
            break;
        }
    }
}

// Driver Code

int main()
{
    vector<int> v = {1,0,1,1,0,0,0};
    sortZeroesAndOnes(v);

    for(int x : v)
        cout<<x<<" ";
    return 0;
}
                                             /******** @Ankit Shukla ********/
