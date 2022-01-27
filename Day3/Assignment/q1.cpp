//Here every order has Ordertime, cooking time, start time which is the time at which order will start cooking,
//Completion time to completing the order and the average waiting time.
//We short process according to their Order time.
//once the one order is prepared then go for that order of which cooktime is minimum
//Repeat this process until all the order is done.
#include<bits/stdc++.h>
using namespace std;
struct orders {
    int ordertime;
    int cooktime;
    int st;
    int ct;
    int wt;
};
int main(){
    struct orders ord[100];
    float avg_wt;
    int n,total_wt=0,is_fin[100];
    memset(is_fin,0,sizeof(is_fin));
    cout<<"Enter the number of orders: ";
    cin>>n;
    for(int i=0;i<n;i++){ //Taking Input
        cout<<"Enter order time "<<i+1<<": ";
        cin>>ord[i].ordertime;
        cout<<"Enter time to prepare order "<<i+1<<": ";
        cin>>ord[i].cooktime;
    }
    int count=0,fin=0,prev=0;
    while(fin!=n){ //Until all the orders finished
        int index=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(ord[i].ordertime<=count && is_fin[i]==0){
                if(ord[i].cooktime<mn){
                    mn=ord[i].cooktime;
                    index=i;
                }
                if(ord[i].cooktime==mn){
                    if(ord[i].ordertime<ord[index].ordertime){
                        mn=ord[i].cooktime;
                        index=i;
                    }
                }
            }
        }
        if(index!=-1){ //Calculating various factors like start time, completion time, waiting time etc
            ord[index].st=count;
            ord[index].ct=ord[index].st+ord[index].cooktime;
            ord[index].wt=ord[index].ct-ord[index].ordertime;
            is_fin[index]=1;
            total_wt+=ord[index].wt;
            count=ord[index].ct;
            prev=count;
            fin++; //This indicate that order is finished
        }
        else{
            count++; //This indicates that we don't have any order at this point so we are incrementing the time
        }
    }
    avg_wt=(float)total_wt/n;
    cout<<"Average waiting Time: "<<avg_wt<<endl;
}