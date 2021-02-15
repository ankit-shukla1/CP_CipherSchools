                                     /**********  Stock Buy and Sell ************/
using namespace std;
#include<bits/stdc++.h>



// Function to calculate the maximum profit from buying and selling stocks
int stockBuySell(const vector<int>& v)
{
    int profit=0;

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[i-1])                      // if the current day's price is greater than last day's price
        {                                       // simply add the difference of the last day and current day price
            profit += (v[i]-v[i-1]);
        }
    }

    return profit;
}

int main()
{
    vector<int> v={100, 180, 260, 310,
                    40, 535, 695};
    cout<<stockBuySell(v);
    return 0;
}
                                             /******** @Ankit Shukla ********/

