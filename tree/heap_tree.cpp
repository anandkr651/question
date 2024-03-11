#include <iostream>
#include<queue>
using namespace std;
class heap
{
public:
    int arr[50];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)       //time complexity is o(logn)                                                           )
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletefromheap()       //o(logn)
    {
        if(size==0)
        {
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;

        //take root node to correct position
        int i=1;
        while(i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }
};

void heapify(int arr[],int n,int i)      //o(logn)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n&&arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n&&arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest !=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)    //o(nlogn)
{
    int size=n;
    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(5);
    h.insert(10);
    h.insert(20);
    h.print();
    h.deletefromheap();
    h.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"printing the array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //heapsort
    heapsort(arr,n);
    cout<<"printing the heap sort "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"using priority queue here "<<endl;
    priority_queue<int>pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"elelment at the top "<<pq.top()<<endl;
    pq.pop();
    cout<<"elelment at the top "<<pq.top()<<endl;
    cout<<"elelment at the size "<<pq.size()<<endl;
    if(pq.empty())
    {
       cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }

    cout<<"printing the min heap"<<endl;
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout<<"elelment at the top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"elelment at the top "<<minheap.top()<<endl;
    return 0;
}
/*55 54 53 50 52 5 10 20 
54 50 53 20 52 5 10 
printing the array now 
55 50 54 52 53 
printing the heap sort 
50 52 53 54 55
using priority queue here 
elelment at the top 5     
elelment at the top 4     
elelment at the size 3
pq is not empty 
printing the min heap
elelment at the top 2
elelment at the top 3
PS C:\Users\DELL\OneDrive\Desktop\question\tree>*/