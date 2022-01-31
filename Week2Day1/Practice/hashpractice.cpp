// Count pairs with given sum 
// Practice the following problem https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1/
#include <bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int k){
    unordered_map<int,int> m;
    int count=0;
    for(int i=0;i<n;i++)
    {
    	int temp=k-arr[i];
        if(m[temp]) //If element already exist then it will add that count into answer
        {
        	count=count+m[temp];
        }
        m[arr[i]]++; //Increment the occurance of the element
    }
    return count;
}
int main(){
	int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getPairsCount(arr,n,k);
    cout<<ans<<endl;
    return 0;
}