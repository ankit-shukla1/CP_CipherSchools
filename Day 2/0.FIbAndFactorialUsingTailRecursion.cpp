                                    /******     Fibonacci Number and Factorial Using Tail Recursion     ******/

using namespace std;
#include<bits/stdc++.h>


// Function to get the nth fibonacci number
int fib(int n)
{
    if(n==0)                     // base cases
        return 0;
    if(n==1)
        return 1;
    return fib(n-1) + fib(n-2);    // tail recursion call
}


// Function to get the factorial of n
int fact(int n)
{
    if(n==0 || n==1)                // Base cases
        return 1;

    return n *fact(n-1);           // Tail recursion call
}


int main()
{

    cout<<"Fibonacci numbers till 5\n";
    for(int i=0;i<=5;i++)              // printing
        cout<<i<<" : "<<fib(i)<<" \n";
    cout<<"\n";


    cout<<"Factorial till 5\n";
    for(int i=0;i<=5;i++)
        cout<<i<<" "<<fact(i)<<" \n";
    return 0;
}


                                                /******* @Ankit Shukla  *****/
