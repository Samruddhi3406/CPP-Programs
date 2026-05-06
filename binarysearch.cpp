#include<iostream>
using namespace std;
int main()
{
	int n,key,arr[100];
	int i;
	cout<<"Enter a no.of elements:";
	cin>>n;
	cout<<"Enter a elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
		{
			cout<<"list is unsorted\n";
		}
	}
	cout<<"Enter a element to search:";
	cin>>key;
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			cout<<"Element found";
			return 0;
		}
		else if(arr[mid]<key)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	
	}
		
		cout<<"Element not found";
		return 0;
}
