#include<iostream>
using namespace std;
int main()
{
	int n,key,arr[30];
	cout<<"Enter no.of elements:";
	cin>>n;
	cout<<"Enter elements:";
	for(int i=0; i<n;i++)
	{
	cin>>arr[i];
    }
	cout<<"Enter element to search:";
	cin>>key;
	for (int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"Found";
			return 0;
		}
	}
	cout<<"Not found";
}

