#include <iostream>
using namespace std;
int main()
{
    int choice2;
    int choice;
    int size = 5;
    int arr[size];
    int value;
    int front=-1;
    int rear=-1;

    do
    {
        cout << "enter your choice" << endl;
        cout << "1 : enque" << endl;
        cout << "2 : dequeue" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter the value for insertion" << endl;
            cin >> value;

            if (rear == size - 1)
            {
                cout << "the queue is full" << endl;
            }
            else if (rear == -1 && front == -1)
            {
                rear = front = 0;
                arr[rear] = value;
            }
            else
            {
                rear++;
                arr[rear] = value;
            }
            break;

        case 2:
            if (rear == -1 && front == -1)
            {
                cout << "the queue is empty" << endl;
            }
            else if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                cout << "the value deleted is " << arr[front] << endl;
                front++;
            }

            break;

            

        }
        cout << "do you want to continue" << endl;
            cout << "1 : yes" << endl;
            cout << "2 : no" << endl;
            cin >> choice2;
    } 
    while (choice2 == 1);

    return 0;
}
