#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;   //size
    int len2=e-mid;     //size
  
  int *first=new int[len1];
  int *second=new int[len2];

  int k=s;
  for(int i=0;i<len1;i++)
  {
    first[i]=arr[k++];
  }

  k=mid+1;
  for(int i=0;i<len2;i++)
  {
    second[i]=arr[k++];
  }

  int index1=0;
  int index2=0;
  k=s;
  while(index1<len1 && index2<len2)
  {
    if(first[index1]<second[index2])
    {
        arr[k++]=first[index1++];
    }
    else{
        arr[k++]=second[index2++];
    }
  }
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
     while(index2<len2)
    {
        arr[k++]=second[index2++];
    }
delete[] first;
delete[] second;
}
void mergesort(int *arr,int start,int end)
{
   if(start>=end)
   return;
   int mid=start+(end-start)/2;

   mergesort(arr,start,mid);

   mergesort(arr,mid+1,end);

   merge(arr,start,end);
}
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,10};
    int end=10,start=0;
    mergesort(arr,start,end-1);
    for(int i=0;i<end;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*1 2 3 4 5 6 7 8 9 10 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/