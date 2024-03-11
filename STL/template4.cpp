#include<iostream>
using namespace std;
template<class t>
class harry{
   public:
   t data;
   harry(t a){
    data=a;
   }
   void display();
};
template<class t>
void harry<t>::display(){
    cout<<data<<endl;
}
void fun(int a)
{
    cout<<"i am the fun function "<<a<<endl;
}
template<class t>
void fun(int a)
{
    cout<<"i am the template function "<<a<<endl;
}
int main()
{
    harry<float>h(5.8);
    h.display();
    harry<char>i('c');
    i.display();
    fun(7);
    return 0;
}
/*5.8
c
i am the fun function 7
PS C:\Users\DELL\OneDrive\Desktop\c++> */