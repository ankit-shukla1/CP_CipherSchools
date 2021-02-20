                                                /******Reverse a Queue******/

using namespace std;
#include<bits/stdc++.h>

void reverseQueue(queue<int>& q)
{
    if(q.empty())
        return;


    int temp = q.front();
    q.pop();

    reverseQueue(q);

    q.push(temp);
}



int main()
{
    queue<int> q;

    for(int i=1;i<=10;i++)
        q.push(i);


    reverseQueue(q);

    return 0;
}


                                                    /***@AnkitShukla****/

