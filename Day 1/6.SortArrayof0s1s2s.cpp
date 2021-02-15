                                     /*********** Sort a Array of 0,1,2 in Single Traversal************/


using namespace std;
#include<bits/stdc++.h>


void sortZerosOnesTwos(vector<int>& v)
{
    int zp=0,op=0,tp=v.size()-1;   // Declaring three pointer pointing to zero, one and two respectively

    while(op<=tp)
    {
        switch(v[op]){             // traversing using the one pointer

        case 0 :                     // if the element is zero, swap and increase the one and zero pointers
            swap(v[zp], v[op]);
            op++;
            zp++;
            break;
        case 1:                    // if the element is one then increase the one pointer
            op++;
            break;
        case 2:                     // if the element is two then swap the elements and increase the two pointer
            swap(v[op],v[tp]);
            tp--;
            break;
        }
    }
}



// Driver Code
int main()
{
    vector<int> v = {0,1,2,0,1,2};
    sortZerosOnesTwos(v);

    for(int x: v)
        cout<<x<<" ";
    return 0;
}

                                             /******** @Ankit Shukla ********/

