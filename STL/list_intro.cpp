#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
list<int> :: iterator it;
for(it=lst.begin();it!=lst.end();it++)
{
     cout<<*it<<" ";
}cout<<endl;
}
int main()
{
   list<int> list1; 

   list1.push_back(5);
   list1.push_back(7);
   list1.push_back(1);
   list1.push_back(9);
   list1.push_back(12);

   display(list1);

   list1.sort();
   display(list1);
   
   list1.pop_back();
   display(list1);
   
   list1.pop_front();
   display(list1);
   
   list1.remove(1);
   display(list1);

   list<int> ::iterator iter;
   iter=list1.begin();
   cout<<"hello "<<*iter<<" ";
   iter++;
   cout<<"hello "<<*iter<<endl;

    list<int> list2(3);
    list<int> ::iterator itr;
   itr=list2.begin();
   *itr=45;
   itr++;
    *itr=12;
   itr++;
     *itr=9;
   itr++;
   cout<<"list2"<<endl;
   display(list2);
   
   cout<<"merge two list"<<endl;
//    list1.merge(list2);
//    display(list1);      

    list1.sort();      //for arrange in sorted merge.
    list2.sort();
    list1.merge(list2);
    display(list1);
   
   cout<<"reversing the number"<<endl;
    list1.reverse();
    display(list1);
  
}
/*5 7 1 9 12     
1 5 7 9 12     
1 5 7 9        
5 7 9 
5 7 9 
hello 5 hello 7
list2
45 12 9        
merge two list
5 7 9 9 12 45
reversing the number
45 12 9 9 7 5
PS C:\Users\DELL\OneDrive\Desktop\question\STL>*/