// I practiced this baisc valid parenthese problem which verify whether the given string of parentheses is valid or not.
//Ex: ([]) is a valid string.
//Ex: (){]]} is not a valid string. 

#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
  stack<char> st;
  bool ans=true;
  int l=s.length();
  for(int i=0;i<l;i++)
  {
      if(s[i]==')' || s[i]=='}' || s[i]==']')
      {
          if(st.empty())
          {
              ans=false;
              return ans;
          }
          else
          {
              char temp;
              temp=st.top();
              st.pop();
              if((temp=='{' && s[i]=='}') || (temp=='(' && s[i]==')') || (temp=='[' && s[i]==']') )
              {
                  continue;
              }
              else
              {
                  ans=false;
                  return ans;
              }
          }
      }
      else
      {
          st.push(s[i]);
      }
  }
  
  if(!st.empty() || ans==false)
  {
      return false;
  }
  else
  {
      return true;
  }
}
int main()
{
  string s;
  cout<<"Enter any Parentheses String: "<<endl;
  cin>>s;
  if(isValid(s))
    cout<<"String is Valid"<<endl;
  else
    cout<<"String is not Valid"<<endl;
}