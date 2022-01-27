#include <bits/stdc++.h>
using namespace std;
void util(char inputpattern[], char maininput[], int q)
{
   int t1=strlen(inputpattern),t2=strlen(maininput);
   int i,j,p=0,t=0,h=1;
   for(i=0;i<t1-1; i++)
      h=(h*256)%q;
   for(i=0;i<t1;i++)
   {
      p=(256*p+inputpattern[i])%q;
      t=(256*t+maininput[i])%q;
   }
   for(i=0;i<=t2-t1;i++)
   {
      if(p==t)
      {
         bool flag=true;
         for(j=0;j<t1;j++)
         {
            if(maininput[i+j]!=inputpattern[j])
            {
               flag=false;
               break;
            }
         }
         if(j==t1)
            cout<<"Input Pattern found at index-> "<< i<<endl;
      }
      if(i< t2-t1)
      {
         t=(256*(t-maininput[i]*h)+maininput[i+t1])%q;
         if(t<0)
            t=(t+q);
      }
   }
}
int main()
{
   char maininput[]="Hey My Name is Pranav. My name is Pranav too";
   char inputpattern[]="Pranav";
   int q=101;
   util(inputpattern,maininput,q);
   return 0;
}