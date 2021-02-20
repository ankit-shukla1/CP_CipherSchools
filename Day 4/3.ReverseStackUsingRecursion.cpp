                                                /******Reverse a Stack******/


using namespace std;
#include<bits/stdc++.h>


class stackReverse
{
    stack<int> st;

    void reverseStack()
    {
        if(st.empty())
        {
            return;
        }

        else
        {
            int t = st.top();
            st.pop();
            reverseStack();
            insertAtBottom(t);
        }
    }

    void insertAtBottom(int x)
    {
        if(st.empty())
            st.push(x);

        else
        {
            int t = st.top();
            st.pop();
            insertAtBottom(x);
            st.push(t);
        }
    }
};

int main()
{
    stack<int> st;

    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    return 0;
}
