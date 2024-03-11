#include<iostream>
using namespace std;
class circular{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    circular(int n)
    {
       size=n;
       front=-1;
       rear=-1;
       arr=new int[n];
    }
    bool enqueue(int value)
    {
        if((front==0 && rear==size-1)||front==rear+1)
        {
            return 0;
        }
        else if(front==-1)
        {
            rear++;
            front++;
            arr[rear]=value;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
        return true;
    }
    int dequeue()
    {
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==size-1)
        {
            front=0;
        }
        else if(front==rear)
        {
            front=rear-1;
        }
        else{
            front++;
        }
        return ans;
    }
};
int main()
{
    circular c(5);
    c.enqueue(34);
    c.enqueue(78);
    c.enqueue(3);
    c.enqueue(8);
    c.enqueue(90);
    c.enqueue(31);
    cout<<c.dequeue()<<endl;
    c.enqueue(398);
    c.enqueue(788);
    cout<<c.dequeue()<<endl;
    cout<<c.dequeue()<<endl;
    cout<<c.dequeue()<<endl;
    cout<<c.dequeue()<<endl;
    cout<<c.dequeue()<<endl;
    cout<<c.dequeue()<<endl;
}
/*34 
78 
3  
8  
90 
398
-1 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/