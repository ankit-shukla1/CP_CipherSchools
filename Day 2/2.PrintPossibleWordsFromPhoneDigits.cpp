                                            /****** Print all Words From Phone Digits *******/
using namespace std;
#include<bits/stdc++.h>


// Helper Function of print words
void printWordsFromPhone(vector<string>& result, vector<int>& input, vector<string> m, string curr, int n,int index)
{
    if(curr.size()==n)              // if the size of current becomes of the required length then push the string into result
    {
        result.push_back(curr);
        return;
    }

    string temp = m[input[index]];         // get the corresponding string from the given input

    for(int i=0;i<temp.size();i++)
    {
        printWordsFromPhone(result,input,m,curr+temp[i],n,index+1);   // including the current character
    }
}

vector<string> printWords(vector<int>& input)
{
    vector<string> result;
    string curr="";

    // mapping the numbers to their corresponding letters.

    vector<string> m = {"","","abc","def","ghi","jkl","mnop","qrst","uvw","xyz"};
    int n= input.size();
    printWordsFromPhone(result,input,m,curr,n,0);

    sort(result.begin(),result.end());     // sorting for easy debugging
    return result;
}


// Driver Code
int main()
{
    vector<int> input={2,3,4};
    vector<string> result = printWords(input);

    for(string s : result)             // printing the result
        cout<<s<<"\n";
    return 0;
}

                                                        /*****  @Ankit Shukla ****/
