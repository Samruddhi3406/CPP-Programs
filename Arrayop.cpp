#include<iostream>
using namespace std;
int main()
{
     int arr[30], n, pos, value, choice;
    int i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "Array Operations \n";
        cout << "1. Insert \n";
        cout << "2. Delete \n";
        cout << "3. Search \n";
        cout << "4. Update \n";
        cout << "5. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: 
                cout << "Enter position to insert: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;

                for(i = n; i > pos; i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[pos] = value;
                n++;

                cout << "Array after insertion: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: 
                cout << "Enter position to delete: ";
                cin >> pos;

                for(i = pos; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;

                cout << "Array after deletion: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 3: 
                cout << "Enter value to search: ";
                cin >> value;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        cout << "Found at position: " << i;
                        break;
                    }
                }
				 if(i == n)
                    cout << "Not found!";
                break;

            case 4: 
                cout << "Enter position to update: ";
                cin >> pos;
                cout << "Enter new value: ";
                cin >> value;

                arr[pos] = value;

                cout << "Array after updation: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 5:
                cout << "Program exited.";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}