                                        /****** Find Excel Sheet Column Number From Give String*******/

using namespace std;
#include<bits/stdc++.h>


// Function to calculate the title to its corresponding number
int titleToNumber(string s)
{
    int ans=0;

    for(char c:s)                             // Extracting characters one by one
        ans = ans * 26 + (int(c)-64);         // Multiplying the previous result by 26 and adding the ASCII value of current character

    return ans;

}


// Driver Code
int main()
{
    string s = "ZY";
    cout<<titleToNumber(s);

    return 0;
}
