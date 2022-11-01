//Naive Solution

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int temp[n],i=0;
    
    for(int j=0;j<n;j++)
        if(arr[j]==0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        if(arr[j]==1)
            temp[i++]=arr[j];
    for(int k=0;k<n;k++)
        if(arr[k]==2)
            temp[i++]=arr[k];
    for(int j=0;j<n;j++)
        arr[j]=temp[j];
    
}

int main() {
	
    int arr[]={0,1,1,2,0,1,1,2};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}