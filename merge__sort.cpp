#include <iostream>
using namespace std;


void merge(int arr[],int l,int m,int r) 
{
	int temp[50];
	int i=l; 
	int j=m+1;
	int k=l;
	
	while(i<=m && j<=r)
	{
		if(arr[i]<arr[j])      
		 temp[k++]=arr[i++];
		else
		 temp[k++]=arr[j++];
	}
	while(i<=m)                
	{
		temp[k++]=arr[i++];
	}
	while(j<=r)
	{
		temp[k++]=arr[i++];
	}
	for(int p=l;p<=r;p++)       
	{
		arr[p]=temp[p];
	}
}
void mergesort(int arr[],int l,int r)  
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int n;
	cout<<"Enter no.of elements:";
	cin>>n;
	int arr[50];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	cout<<"Sorted Array:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
