#include<iostream>
using namespace std;
bool solve(int num){
    int start=0,end=num;
    long long int mid = start+(end-start)/2;
    while(start<=end){
        if(mid*mid== num){
            return true;
        }else if(mid*mid > num){
            end= mid-1;
        }else{
            start= mid+1;
        }
        mid = start+(end-start)/2;
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool ans = solve(n);
    if(ans == 1){
        cout<<"this a perfect square ";
    }else{
        cout<<"this is not a perfect square";
    }
}
/*enter the number 3
this is not a perfect square
PS D:\question\tcs question>*/
/*enter the number 1
this a perfect square 
PS D:\question\tcs question>*/