#include <iostream>
using namespace std;
#define MAX 3
class stack{
	int arr[MAX];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int value)
		{
			if(top==MAX-1)
			{
				cout<<"Stack overflow !,Cannot insert"<<" "<<value<<endl;
			}
			else
			{
				top++;
				arr[top]=value;
				cout<<value<<" "<<"inserted into stack\n";
			}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"Stack underflow !,stack is empty\n";
			}
			else
			{
				cout<<arr[top]<<" "<<"deleted from stack";
				top--;
			}
		}
		
    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Stack elements are: ";
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
	stack s;
	int choice;
	do{
		cout<<"\n-----Stack Menu----\n";
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.display\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				int value;
			    cout<<"enter a value:";
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
				cout<<"Exiting Program..\n";
				break;
			default:
				cout<<"Invalid choice!";
		}
			
	}while(choice !=3);
	return 0;
}
