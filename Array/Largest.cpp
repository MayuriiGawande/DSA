#include<iostream>
using namespace std;

int getLargest(int arr[],int n)
{
    int res = 0;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res = i;
        }
    }

    return res;
}

int main()
{
    int arr[] = {5,8,20,10},n=4;
    cout<<getLargest(arr,n);
}