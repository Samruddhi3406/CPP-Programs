#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* prev;
		Node* next;
	
};
class DoublyLinkedList
{
	private:
		Node* head;
	
	public:
		 DoublyLinkedList()
		{
			head=NULL;
		}
		void insertBegin(int val)
		{
			Node* newnode=new Node();
			newnode->data=val;
			newnode->prev=NULL;
	 		newnode->next= head;
	 		if(head != NULL)
	 		{
	 			head->prev=newnode;
	 		}
	 		head=newnode;
		}
		void insertEnd(int val)
		{
			Node* newnode=new Node();
			newnode->data=val;
			newnode->next=NULL;
			
			if(head==NULL)
			{
				head->prev=NULL;
				head=newnode;
				return;
			}
			Node* temp=head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->prev=temp;
		}
		void deleteBegin()
		{
			if(head==NULL)
			{
				cout<<"LIST IS EMPTY\n";
				return;
			}
			Node* temp=head;
			head=head->next;
			if(head != NULL)
			{
				head->prev=NULL;
			}
			delete temp;
		}
		void display()
		{
			Node* temp=head;
			while (temp!=NULL)
			{
				cout<<temp->data<<"<->";
				temp=temp->next;
			}
			cout<<"NULL\n";
		}
};
int main()
{
	DoublyLinkedList list;
	int choice ,val;
	do
	{
		cout<<"1.Insert at begining\n";
		cout<<"2.Insert at end\n";
		cout<<"3.Delete from begining\n";
		cout<<"4.Display\n";
		cout<<"5.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter value:";
				cin>>val;
				list.insertBegin(val);
				break;
			case 2:
				cout<<"Enter value:";
				cin>>val;
				list.insertEnd(val);
				break;
			case 3:
				list.deleteBegin();
				break;
			case 4:
				list.display();
				break;
			case 5:
				cout<<"Exit\n";
				break;
			case 6:
				cout<<"Invalid choice\n";
		}
	}while(choice != 5);
 
 return 0;
}
