                                     /*********** Search In Sorted Matrix ************/

using namespace std;
#include<bits/stdc++.h>


// function to search an element in a sorted matrix

void SearchSortedMatrix(const vector<vector<int>>& v, int x)
{
    int r = v.size();           // getting the row size
    int c = v[0].size();        // getting the column size

    int i=0, j=c-1;     // starting from the top right element

    while(i<r && j>=0)
    {
        if(v[i][j]==x)           // if element is found, print the position and return
        {
            cout<<"Found At\n";
            cout<<i+1<<" Row "<<j+1<<" Column \n";
            return;
        }

        else if(v[i][j]>x)        // if the current element is greater than the required element
        {                           // then move to the previous column
            j--;
        }
        else                    // if the current element is less than the required element then
        {                        // move to the next row.
            i++;
        }
    }

}

int main()
{
        vector<vector<int>> v = { { 10, 20, 30, 40 },          // Declaring a 4*4 matrix using 2d matrix
                                { 15, 25, 35, 45 },
                                { 27, 29, 37, 48 },
                                { 32, 33, 39, 50 } };

                      SearchSortedMatrix(v,29);
    return 0;
}


                                             /******** @Ankit Shukla ********/

