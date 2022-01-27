//Here I practiced about the scenario where if we have a more elements then our size or modulo then
//we have to chain the elements which have same hash value.
// This is an example of Separate Chaining
#include<bits/stdc++.h>
using namespace std;
class hashtable
{
   int sizemod; //Size of hashtable
   list<int> *table;
public:
   hashtable(int size)
   {
      this->sizemod=size;
      table=new list<int>[sizemod];
   }
   int hashalgo(int x){
      return (x%sizemod); //We are performing modulo operation on the element with respect to size of hashtable
   }
   void insertele(int x)
   {
      int tt=hashalgo(x);
      table[tt].push_back(x); //Insert element according to its bucket
   }
   void deleteele(int x)
   {
      int tt=hashalgo(x);
      list<int>::iterator i;
      for(i=table[tt].begin(); i!=table[tt].end(); i++)
      {
         if(*i==x)
            break;
      }
      if(i!=table[tt].end())
         table[tt].erase(i); //Deleting element from its bucket
   }
   void display() //Display all the elemets according to their hash value
   {
      for(int i=0;i<sizemod;i++){
         cout<<i;
         for(auto x:table[i])
            cout<<"->"<<x; //To show elements with chain who have same hash value
         cout<<endl;
      }
   }
};
int main()
{
   hashtable h(5);
   int input[]={55,33,22,11,66,22,64,23,56,12};
   int n = sizeof(input)/sizeof(input[0]);
   for(int i=0;i<n;i++)
      h.insertele(input[i]);
   cout<<"Initial View of Hashtable"<<endl;
   h.display();
   cout<<"After Deletion of Element 33"<<endl;
   h.deleteele(33);
   h.display();
   cout<<"After Deletion of Element 66"<<endl;
   h.deleteele(66);
   h.display();
   return 0;
}