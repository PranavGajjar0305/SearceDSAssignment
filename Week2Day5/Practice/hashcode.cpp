#include<bits/stdc++.h>
using namespace std;
int size=100;
vector<int> hasha(100,-1);
class hashtable{
    public:
    int hashalgo(int key) //Main algo part
    {
        return key%100;
    }
    void insertele(int val) //Inserting Element into hash table
    {
        if(hasha[hashalgo(val)]!=-1)
        {
            cout<<"Hash Collision Occured"<<endl;
        }
        else
        {
            hasha[hashalgo(val)]=val;
            cout<<"Element Inserted Successfully"<<endl;
        }
    }
    void deleteele(int val) //Deleting Element into hash table
    {
        if(hasha[hashalgo(val)]!=-1)
        {
            hasha[hashalgo(val)]=-1;
            cout<<"Element Deleted Successfully"<<endl;
        }
        else
        {
            cout<<"Element Doesn't exist"<<endl;
        }
    }
    void search(int val) //Searching Element into hash table
    {
        if(hasha[hashalgo(val)]!=-1)
        {
            cout<<"Element exists"<<endl;
            cout<<"Value is :"<<val<<" respective key is :"<<hashalgo(val)<<endl;
        }
        else
        {
            cout<<"Element Doesn't exist"<<endl;
        }
    }
    void sizeofhash() //Size of hash table
    {
        cout<<"Size of Hash Table is: "<<100<<endl;
    }
    
};
int main()
{
    hashtable h;
    int choice=0;
    int temp;
    while(true)
    {
    	cout<<"hashtable size is 100"<<endl;
        cout<<"1)insert 2)delete 3)search 4)size 5)exit"<<endl;
        cout<<"Enter Your Choice:";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter Elemenet to Insert: "<<endl;
            cin>>temp;
            h.insertele(temp);
        }
        else if(choice==2)
        {
            cout<<"Enter Elemenet to Delete: "<<endl;
            cin>>temp;
            h.deleteele(temp);
        }
        else if(choice==3)
        {
            cout<<"Enter Elemenet to Search: "<<endl;
            cin>>temp;
            h.search(temp);
        }
        else if(choice==4)
        {
            h.sizeofhash();
        }
        else
        {
            break;
        }
    }
    return 0;
}