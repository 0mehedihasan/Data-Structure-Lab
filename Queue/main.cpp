#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Queue
{
private:
    int item, i;
    int arr[100];
    int rear;
    int fronts;

public:

    Queue()
    {
        rear = 0;
        fronts = 0;
    }

    void insert()
    {
        if (rear == 100)
            cout << "Queue Reached Max!";
        else
        {
            cout << "Insert : ";
            cin>>item;
            arr[rear++] = item;
        }
    }

    void removedata()
    {
        if (fronts == rear)
            cout << "Queue is Empty!";
        else
        {
            fronts++;
        }
    }

    void display()
    {
        cout << "\nQueue Size : " << (rear - fronts);
        for (i = fronts; i < rear; i++)
            cout <<"\nValue  : " << arr[i];
    }
};

int main()
{
    Queue obj;
    obj.insert();
    obj.insert();
    obj.insert();
    obj.insert();
    obj.insert();
    obj.display();

    obj.removedata();
    obj.removedata();
    obj.removedata();
    obj.display();

    return 0;
}
