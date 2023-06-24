bool isValidParenthesis(string ex)
{
    // Write your code here.
    stack<char> st;
    int n = ex.length();
    if(n == 0)
    {
        return true;
    }
    if(n %2 != 0)
    {
        return false;
    }
    for(int i =0;i<n;i++)
    {
      if((ex[i] == '{') || (ex[i] == '(') || (ex[i] == '[')) 
      {
           st.push(ex[i]);
      } 
      else if(!st.empty())
       {
         
          if((st.top() == '{' && ex[i] == '}') ||(st.top() == '(' && ex[i] == ')')||(st.top() == '[' && ex[i] == ']'))
              st.pop();
           else
           return false;
       }
       else
        return false;
    }
    return st.empty();
    return true;

}