                                                /******Check For Balanced Paranthesis******/
using namespace std;
#include<bits/stdc++.h>

bool isMatching(char c,stack<char>& st)
{
    if(st.empty())
        return false;

    char temp = st.top();
    return ( (temp=='(' && c==')') || (temp=='[' && c==']') || (temp=='{' && c=='}') );
}

bool checkForBalancedParenthesis(string s)
{
    stack<char> st;

    for(char c : s)
    {
        if(c=='{' || c=='[' || c=='(')
        {
            st.push(c);
        }
        else if(isMatching(c,st))
        {
            st.pop();
        }
        else
        {
            return false;
        }
    }

    if(st.empty())
        return true;

    else
        return false;
}


int main()
{
    string s="[]{}()";
    cout<<checkForBalancedParenthesis(s);
    return 0;
}
