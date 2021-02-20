                                                /******Design a Stack With Min Operations******/


using namespace std;
#include<bits/stdc++.h>



class MinStack
{
    public:
    stack<int> s;
    int minEle;


    void push(int n)
    {
        if(s.empty())
        {
            s.push(n);
            minEle=n;
        }

        else
        {
            if(n>=minEle)
            {
                s.push(n);
            }
            else
            {
                s.push(2*n-minEle);
                minEle=n;
            }
        }
    }

    void pop()
    {
        if(s.empty())
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            int temp = s.top();

            if(temp<minEle)
            {
                minEle = 2*minEle - temp;
                s.pop();
            }
            else
            {
                s.pop();
            }
        }
    }

    int peek()
    {
       if(s.empty())
        cout<<"The Stack is empty";
       else
       {
           int temp = s.top();
           if(temp < minEle )
           {
               return minEle;
           }
           else
            return temp;
       }
    }

    int getMinElement()
    {
        if(s.empty())
        {
            cout<<"Stack is Empty\n";
        }
        else
        {
            return(minEle);
        }
    }

};

int main()
{
    MinStack m ;
    m.push(18);
    m.push(19);
    m.push(15);
    m.push(16);
    m.push(29);
    m.push(20);
    cout<<m.getMinElement();
}


                                                    /***@AnkitShukla****/
