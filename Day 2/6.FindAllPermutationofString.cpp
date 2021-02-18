                                        /******6.Find all permutations of the string *******/
using namespace std;
#include<bits/stdc++.h>


void findAllPermutationsHelper(string s, int start, int end, vector<string>& ans)
{
    if(start==end)                           //Base Condition
    {
        ans.push_back(s);               // Pushing the answer into the vector
        return;
    }

    for(int i=start;i<=end;i++)
    {
        swap(s[i],s[start]);                            // Swapping every value with every value and considering all possibilities;
        findAllPermutationsHelper(s,start+1,end,ans);
        swap(s[i],s[start]);                        // Backtracking Step
    }

}



// Function to calculate all the permutations of a string
vector<string> findAllPermutations(string s)
{
    int n = s.size();
    vector<string> ans;
    findAllPermutationsHelper(s,0,n-1,ans);
    return ans;
}


// Driver Code
int main()
{
    string s ="ABCD";
    vector<string> ans= findAllPermutations(s);

    for(string s : ans)
        cout<<s<<"\n";
    return 0;
}



                                                        /*****  @Ankit Shukla ****/

