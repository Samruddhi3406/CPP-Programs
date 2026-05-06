#include <iostream>
using namespace std;
int main()
{
	int n,arr[30];
	int i,j;
	cout<<"Enter a no.of elements:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<"Sorted Array:";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
