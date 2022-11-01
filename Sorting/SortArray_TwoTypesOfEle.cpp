//Naive Method

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int temp[n],i=0;
    
    for(int j=0;j<n;j++)
        if(arr[j]<0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        if(arr[j]>=0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        arr[j]=temp[j];
}

int main() {
	
    int arr[]={13,-12,18,-10};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}