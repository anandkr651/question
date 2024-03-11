#include<iostream>
using namespace std;

template<class t>
void swapp(t &a,t &b)
{
    t temp=a;
    a=b;
    b=temp;
}
template <class t1,class t2>
float functionvag(t1 a,t2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a=functionvag(5,2);
    cout<<"the average of these number is %.3f "<<a<<endl;
    int x=4,y=8;
    swapp(x,y);
    cout<<x<<endl<<y;
}
/*the average of these number is %.3f 3.5
8
4
PS C:\Users\DELL\OneDrive\Desktop\c++> */