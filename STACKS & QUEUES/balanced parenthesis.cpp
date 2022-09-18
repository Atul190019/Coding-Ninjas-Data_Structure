#include<bits/stdc++.h>
bool isBalanced(string exp) 
{
    stack <char> c;
    
    for(int i=0;exp[i]!='\0';i++){
        
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
            c.push(exp[i]);
        
        if(exp[i]=='}'){
            if(!c.empty() && c.top()=='{')
                c.pop();
            else
                return false;
        }
        if(exp[i]==']'){
            if(!c.empty() && c.top()=='[')
                c.pop();
            else
                return false;
        }
        if(exp[i]==')'){
            if(!c.empty() && c.top()=='(')
                c.pop();
            else
                return false;
        }
    }
    if(!c.empty())
        return false;
    return true;
    // Write your code here
}
