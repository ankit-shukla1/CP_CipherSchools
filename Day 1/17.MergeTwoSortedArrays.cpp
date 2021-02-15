                                     /**********  Merge Two Sorted Arrays ************/


#include<bits/stdc++.h>
using namespace std;


// Function to merge to sorted arrays
vector<int> mergeSortedArrays(const vector<int>& first,const vector<int>& second)
{
    int i=0,j=0,k=0;
    vector<int> result(first.size() + second.size());

    while(i<first.size() && j<second.size())            //  inserting the elements into a new array
    {
        if(first[i]<=second[j])                            // inserting the smaller element one by one from both of the arrays
        {
            result[k]=first[i];
            i++;
        }
        else
        {
            result[k]=second[j];
            j++;
        }
        k++;
    }


    while(i<first.size())                               // for any element left in the first array
    {
        result[k]=first[i];
        k++;
        i++;
    }

    while(j<second.size())                          // for any element left in the second array
    {
        result[k]=second[j];
        k++;
        j++;
    }

    return result;
}


// Driver Code
int main()
{
    vector<int> first = {1,3,5,7};
    vector<int> second = {2,4,6,8};
    vector<int> result= mergeSortedArrays(first,second);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}

                                             /******** @Ankit Shukla ********/
