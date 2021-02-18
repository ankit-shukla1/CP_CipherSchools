                                        /****** 14. Power Set Using Recursion*******/


using namespace std;
#include<bits/stdc++.h>



// Helper function to get the power set
void help(string a,string curr,vector<string> &v,int index=0)
{
    if(index == a.length())              // Base case
    {
        v.push_back(curr);
        return;
    }

    help(a,curr,v,index+1);                      // not considering the current character
    help(a,curr+a[index],v,index+1);            // considering the current character

}
// Function that calculates the power set of the string
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> v;
   help(s,"",v,0);
   sort(v.begin(),v.end());                        // sorting for easy debugging
   return v;
}



// Driver Code
int main()
{
    string s = "ABC";
    vector<string> result = powerSet(s);

    for(string s : result)
        cout<<s<<"\n";
    return 0;
}


                                                        /*****  @Ankit Shukla ****/
