#include<iostream>
using namespace std;
#include<list>

int main()
{
    list<int> l;
    l.push_back(6);
    l.push_back(9);
    l.push_front(2);
    l.push_front(4);
    cout<<"print l"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> n(l);
    cout<<"print n"<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    list<int> p(5,100);
    cout<<"print p"<<endl;
    for(int i:p)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size "<<l.size()<<endl;
}
/*print l
4 2 6 9
print n
4 2 6 9
print p
100 100 100 100 100
after erase
2 6 9
size 3
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/