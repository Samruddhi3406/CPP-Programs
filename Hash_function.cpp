#include <iostream>
using namespace std;
#define SIZE 7

class Hashtable
{
	int table[SIZE];
	public:
		Hashtable()
		{
			for(int i=0;i<SIZE;i++)
			{
				table[i]=-1;
			}
		}
		int hashfunction(int key)
		{
			return key % SIZE;
		}
		void insert(int key)
		{
			int index=hashfunction(key);
			while(table[index] != -1)
			{
				index=(index +1) %SIZE;
			}
			table[index]=key;
			cout<<key<<"inserted at  index"<<index<<endl;
		}
		void display()
		{
			cout<<"Hash Table:";
			for(int i=0;i<SIZE;i++)
			{
				cout<<i<<"-->"<<table[i]<<endl;
			}
		}
};
int main()
{
	Hashtable h;
	int key,choice;
	do
	{
		cout<<"1.insert";
		cout<<"2.delete";
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter key:";
				cin>>key;
				h.insert(key);
				break;
			case 2:
				h.display();
				break;
			default:
				cout<<"invalid choice";
		}
		
	}while(choice!=2);
	return 0;
}

