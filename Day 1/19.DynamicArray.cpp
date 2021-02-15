                                     /**********  Dynamic Array Allocation ************/


using namespace std;
#include<bits/stdc++.h>


int main()
{
  int n;
  cout<<"Enter the size\n";             // getting dynamic size from user
  cin>>n;

  int *arr = new int[n];                // allocating memory using new operator

  cout<<"Enter the elements\n";          // taking all the elements as input.
  for(int i=0;i<n;i++)
    cin>>arr[i];


  cout<<"The elements are\n\n";        // printing all the elements
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    cout<<"\n\n";

  return 0;
}

                                             /******** @Ankit Shukla ********/
