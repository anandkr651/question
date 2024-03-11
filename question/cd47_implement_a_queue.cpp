// #include<iostream>
// #include<queue>
// using namespace std;
// class queuee{
//     int *arr;
//     int qfront;
//     int rear;
//     int size;
//     public:
//     queuee(int n)
//     {
//        size=n;
//        qfront=0;
//        rear=0;
//        arr=new int[n];
//     }
//     bool isempty()
//     {
//         if(qfront==rear)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     void enqueue(int data)
//     {
//         if(rear==size)
//         {
//             return ;
//         }
//         arr[rear]=data;
//         rear++;
//     }
//     int dequeue()
//     {
//         if(qfront==rear)
//         {
//             return -1;
//         }
//         else{
//             int ans=arr[qfront];            
//             if(qfront==rear)
//             {
//                 rear=qfront=0;
//             }
//             else{
//             qfront++;
//             }
//             return ans;
//         }
//     }
//     int front()
//     {
//         if(qfront==rear)
//         {
//             return -1;
//         }
//         else{
//             return arr[qfront];
//         }
//     }
// };
// int main()
// {
//   queuee s(5);
//   s.enqueue(17);
//   s.enqueue(23);
//   s.enqueue(34);
//   s.enqueue(56);
//   s.enqueue(11);
//   s.enqueue(78);
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
//   cout<<s.dequeue()<<endl;
// }
// /*17
// 23
// 34
// 56
// 11
// -1
// -1
// PS C:\Users\DELL\OneDrive\Desktop\question\question> */


#include<iostream>
#include<queue>
using namespace std;
class queuee{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    queuee(int n)
    {
       size=n;
       qfront=-1;
       rear=-1;
       arr=new int[n];
    }
    bool isempty()
    {
        if(qfront==-1&&rear==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data)
    {
        if(rear==size-1)
        {
            cout<<"queue is full"<<endl;
            return ;
        }
        else if(rear==-1&&qfront==-1)
        {
              rear=qfront=0;
              arr[rear]=data;
        }
        else{
        rear++;
        arr[rear]=data;
        }
    }
    int dequeue()
    {
        if(qfront==-1&&rear==-1)
        {
            return -1;
        }
        else{
            int ans=arr[qfront];
            if(qfront==rear)
            {
                qfront=rear=-1;
            }
            else{          
            qfront++;
            }
            return ans;
        }
    }
    int front()
    {
        if(qfront==-1&&rear==-1)
        {
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main()
{
  queuee s(5);
  s.enqueue(17);
  s.enqueue(23);
  s.enqueue(34);
  s.enqueue(56);
  s.enqueue(11);
  s.enqueue(78);
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
  cout<<s.dequeue()<<endl;
}
/*queue is full
17
23
34
56
11
-1
-1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/