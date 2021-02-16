                                    /******     Print Balanced Paranthesis    ******/
using namespace std;
#include<bits/stdc++.h>


//Helper function to get all the possible valid combinations
void parenthesisHelper(vector<string>& v, string s, int n, int open, int close)
{
    if(close>open || close>n || open >n)      // Base cases
    return;

    if(close==n)                           // if the valid string is formed push it into vector
    {
        v.push_back(s);
        return;
    }



    parenthesisHelper(v,s+")",n,open,close+1);        // considering all possibilities
    parenthesisHelper(v,s+"(",n,open+1,close);


}

// Function for getting parenthesis
vector<string> printParenthesis(int n)
{
    vector<string> v;
    string s="";
     parenthesisHelper(v,s,n,0,0);
     return v;
}


// Driver Code
int main()
{
    int n=3;
    vector<string> result = printParenthesis(3);

    for(string s: result)                       // printing all possibilities
        cout<<s<<" \n";
    return 0;
}
