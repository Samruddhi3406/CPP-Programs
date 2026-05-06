#include <iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};
class Queue
{
	node *front,*rear;
	public:
		Queue()
		{
			front=rear=NULL;
		}
		void enqueue(int x)
		{
			node* newnode=new node();
			newnode->data=x;
			newnode->next=NULL;
			if(rear==NULL)
			{
				front=rear=newnode;
			}
			else
			{
				rear->next=newnode;
				rear=newnode;
			}
			cout<<"Inserted:"<<x<<endl;
		}
		void dequeue()
		{
			if(front==NULL)
			{
				cout<<"Queue underflow\n";
				return;
			}
			node* temp=front;
			cout<<"Deleted:"<<temp->data<<endl;
			front=front->next;
			if(front==NULL)
			rear=NULL;
			
			delete temp;
		}
		void display()
		{
			if(front ==NULL)
			{
				cout<<"Queue is empty";
				return;
			}
			node* temp=front;
			cout<<"Queue elements:";
			while(temp != NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL";
		}
};
int main()
{
	Queue q;
	int choice,value;
	do
	{
		cout<<"\n---Queue Menu---\n";
		cout<<"1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";
		cout<<"enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter a value:";
				cin>>value;
				q.enqueue(value);
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.display();
				break;
			case 4:
				cout<<"Exiting....\n";
				break;
			default:
				cout<<"Invalid input\n";
		}
	}while(choice!=4);
	return 0;
}
