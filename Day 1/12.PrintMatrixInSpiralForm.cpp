                                     /**********  Search In a Sorted Rotated Array ************/
using namespace std;
#include<bits/stdc++.h>


// Function to print the spiral traversal of a matrix.
void printSpiralForm(const vector<vector<int>>& v)
{
    int r = v.size();             // calculating number of rows
    int c = v[0].size();          // calculating number of columns

    int top=0,bottom=r-1,left=0,right=c-1;

    while(top<=bottom && left<=right)
    {

        for(int i=left; i<=right; i++)  //printing top row;
        {
            cout<<v[top][i]<<" ";
        }
        top++;

        for(int i=top; i<=bottom; i++)    // printing the last column
        {
            cout<<v[i][right]<<" ";
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)        // printing the bottom column
            {
                cout<<v[bottom][i]<<" ";
            }

            bottom--;
        }

        if(left<=right)
        {
            for(int i=bottom; i>=top; i--)      // printing the leftmost column
            cout<<v[i][left]<<" ";
            left++;
        }
    }
}

// Driver Code
int main()
{
    vector<vector<int>> v = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };

    printSpiralForm(v);
    return 0;
}


                                             /******** @Ankit Shukla ********/

