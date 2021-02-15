                                     /*********** Majority Element ************/


using namespace std;
#include<bits/stdc++.h>


// Function to find the candidate element in the array.

int findCandidate(const vector<int> &v)
{
    int index=0, count=1;             // Initially we consider the first element as candidate and initialize the count as 1

    for(int i=1; i<v.size(); i++)
    {
        if(v[i]==v[index])         // if we find the same element is then we increase the count.
            count++;
        else
            count--;                // if we find any other element then we decrease the count.

        if(count==0)               // if the count becomes 0 then we consider other element as candidate and reset the count.
        {
            index=i;
            count=1;
        }
    }

    return index;
}


// Function to find the majority element

int findMajority(const vector<int>& v)
{
    int candidate = findCandidate(v);       // finding the candidate element.

    int freq=0;
    int n = v.size();

    for(int i=0; i<n; i++)
    {
        if(v[i]==v[candidate])              // counting the frequency of the candidate element
            freq++;
    }

    if(freq>(n/2))                           // if frequency is greater than n/2 return the candidate
        return v[candidate];
    else                                      // else return INT_MAX;
        return INT_MAX;
}


int main()
{
    vector<int> v = {3, 3, 4, 4, 4, 4, 2};

    int res = findMajority(v);
    if(res!=INT_MAX)                      // if majority element found, then print the majority element
        cout<<res;
    else                                                   // else print no majority element found
        cout<<"No majority element found"<<"\n";

    return 0;
}


                                             /******** @Ankit Shukla ********/
