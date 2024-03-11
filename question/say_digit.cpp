#include<iostream>
using namespace std;
void saydigit(int n)
{
    if(n==0)
    return ;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int digit=n%10;
    n=n/10;
    saydigit(n);
    cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    saydigit(n);
    return 0;
}
/*enter the number 412
four one two 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/