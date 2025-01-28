#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n<0){
        cout<<"negative ";
    }else if(n>0){
        cout<<"positive ";
    }else{
        cout<<"zero ";
    }
    if(n%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
/*enter the number 0
zero even
PS D:\question\tcs question>*/