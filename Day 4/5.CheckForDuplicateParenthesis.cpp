                                                /******Check For Duplicate Paranthesis ******/
using namespace std;
#include<bits/stdc++.h>

bool checkForDuplicateParenthesis(string s)
{
    stack<char> st;

    for(char c : s)
    {
        if(c==')')
        {

            int count=0;

            char top = st.top();
            st.pop();

            while(top != '(')
            {
                top = st.top();
                st.pop();
                count++;
            }
            if(count<1)
                return false;
        }
        else
            st.push(c);

    }
        return true;


}



int main()
{
    string s ="(((a+b))+c)";
    cout<<checkForDuplicateParenthesis(s);

    return 0;
}



                                                    /***@AnkitShukla****/
