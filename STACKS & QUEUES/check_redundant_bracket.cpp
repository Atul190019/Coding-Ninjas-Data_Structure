#include<stack>
bool checkRedundantBrackets(string &s)
{
   stack<char> st;
    for(char ch : s)
    {
        if(ch!=')') st.push(ch);
        else 
        {
            bool op = false;
 
            while(!st.empty() and st.top()!='('){
                char top = st.top();
                if(top == '+' or top == '-' or top == '/' or top == '*') op = true;
                st.pop();
            }
            st.pop();
 
            if(!op) return 1;
        }
    }
 
    return 0;
}

