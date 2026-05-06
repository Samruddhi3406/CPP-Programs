#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
class stack
{
	Node* top;
	public:
		stack()
		{
			top=NULL;
	    }
	    void push(int x)
	    {
	    	Node* newNode= new Node();
	    	newNode->data=x;
	    	newNode->next=top;
	    	top=newNode;
	    	cout<<"Inserted:"<<x<<endl;
		}
		void pop()
		{
			if(top==NULL)
			{
				cout<<"Stack underflow";
				return;
			}
			Node* temp=top;
			cout<<"Deleted:"<<temp->data<<endl;
			top=top->next;
			delete temp;
		}
		void display()
		{
			if(top==NULL)
			{
				cout<<"Stack is empty";
				return;
			}
			Node* temp=top;
			cout<<"Stack elements:";
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
	stack s;
	int choice,value;
	
	do
	{
		cout<<"\n---STACK MENU---\n";
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Exit\n";
		cout<<"Enter choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter value:";
				cin>>value;
				s.push(value);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				cout<<"Exiting...\n";
				break;
			default:
				cout<<"invalid input\n";
		}
		
	}while(choice!=4);
	return 0;
}

