#include <iostream>
using namespace std;
int first(int arr[],int size,int key)
{
    int start = 0;
    int  end = size -1;
    int mid = start+(end-start)/2;
    while(start <= end)
    {
        if(arr[mid]==key)
        {end=mid+1;
        return mid;}
        if(arr[mid]<key)
        start=mid+1;
        if(arr[mid]>key)
        end=mid-1; 
        mid = start+(end-start)/2;
    }

    return -1;
}
int last(int arr[],int size,int key)
{
    int start = 0;
    int  end = size -1;
    int mid = start+(end-start)/2;
    while(start <= end)
    {
        if(arr[mid]==key)
       { start=mid+1;
        return mid;}
        if(arr[mid]<key)
        start=mid+1;
        if(arr[mid]>key)
        end=mid-1; 
        mid = start+(end-start)/2;
    }

    return -1;
}

int main(){
    int arr[100];
    cout<<"Enter the number of elements in array: ";
    int n ;
    cin>> n ;
    cout <<"enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Enter element to search : ";
    int x;
    cin>>x;
    int left,right;
    left = first(arr,n,x);
    right = last(arr,n,x);
    cout<<"left most occurence of Element is "<<left;  
    cout<<"right most occurence of Element is "<<right;  
}