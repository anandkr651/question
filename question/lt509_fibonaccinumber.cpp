#include<iostream>
using namespace std;
class solution {
    public:
    int fibonacci(int n)
{
    if(n==1||n==0)
    {
        return n;
    }  
    return fibonacci(n-1)+fibonacci(n-2);
}
};
int main()
{   
    int p;
    cout<<"enter the number"<<endl;
    cin>>p; 
    solution t;
    cout<<t.fibonacci(p);
}
/*enter the number
6
8
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/