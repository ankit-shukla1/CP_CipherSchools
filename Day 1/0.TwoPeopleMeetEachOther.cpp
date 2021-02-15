                                     /*********** Two People Meet Each Other ************/

using namespace std;
#include<bits/stdc++.h>

bool meetEachOther(int x1, int x2, int v1, int v2)
{
    // If any position is smaller than the other and it's speed is also
    // less than or equal to the other then it will never meet.  So returning false;

    if( (x1<x2 && v1<=v2) || (x2<x1 && v2<=v1) )
    {
        return false;
    }

    // Checking if the relative speed is the factor of relative distance, then only they will meet.


    if(x2<x1)                   // if the first one is greater
    {
        return ((x1-x2)%(v1-v2) == 0);
    }
    else                        // if the second one is greater
    {
        return ((x2-x1)%(v2-v1) == 0);
    }
}


int main()
{
    int x1=6,x2=4,v1=6,v2=8;
    // cin>>x1>>v1>>x2>>v2;

    if(meetEachOther(x1,x2,v1,v2))
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}



// To check against different test cases uncomment the line having cin in the main funciton.


                                             /******** @Ankit Shukla ********/
