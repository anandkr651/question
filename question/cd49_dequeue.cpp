#include <iostream>
#include <deque>
using namespace std;
class dequee
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    dequee(int n)
    {
        size = n;
        front = -1;
        rear = -1;
        arr = new int[n];
    }
    bool pushfront(int value)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && front == rear+1))
        {
            return 0;
        }
        else if (front == -1)
        {
            rear = front = 0;
        }
        else if (rear != size - 1 && front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = value;
        return true;
    }
    bool pushrear(int value)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && front == rear+1))
        {
            return 0;
        }
        else if (rear == -1)
        {
            rear = front = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }
    int popfront()
    {
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = 0;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int poprear()
    {
        if (rear == -1)
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = rear = 0;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }
    int getfront()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[front];
    }
    int getrear()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[rear];
    }
    bool isfull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == front == rear+1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    dequee d(5);
    d.pushfront(3);
    d.pushfront(4);
    d.pushrear(9);
    d.pushrear(7);
    d.pushrear(2);
    cout << "popfront " << d.popfront() << endl;
    cout << "poprear" << d.poprear() << endl;
    cout << "isempty" << d.isempty() << endl;
    cout << "isfull" << d.isfull() << endl;
    cout << "getrear" << d.getrear() << endl;
    cout << "getfront" << d.getfront() << endl;
}
/*popfront 4
poprear2
isempty0
isfull0
getrear7
getfront3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/