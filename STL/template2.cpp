#include<iostream>
using namespace std;

template<class t1=int,class t2=float>
class harry{
    public:
    t1 a;
    t2 b;
    harry(t1 x,t2 y)
    {
        a=x;
        b=y;
    }
    void display(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
    harry<>h1(2,2.5);
    h1.display();
    harry<char,int>h2('c',2);
    h2.display();
    return 0;
}
/*the value of a is 2
the value of b is 2.5
the value of a is c
the value of b is 2
PS C:\Users\DELL\OneDrive\Desktop\c++> */