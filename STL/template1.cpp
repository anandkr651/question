#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETER {ONE,TWO,THREE OR MORE THAN}
templete <class T1,class T2>(COMMMA SEPERATED)
    class nameofclass{
        //body
}*/

template<class T1,class T2>
class myclass{
    public:
       T1 data1;
       T2 data2;
       myclass (T1 a,T2 b)
       {
        data1=a;
        data2=b;
       }
    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass<char,int>obj('v',4);
    obj.display();
    myclass<string,int>bj("vikey",4);
    bj.display();
    myclass<int,float>ob(76,4.09);
    ob.display();
    return 0;
}
/*v
4
vikey
4
76
4.09
PS C:\Users\DELL\OneDrive\Desktop\c++*/