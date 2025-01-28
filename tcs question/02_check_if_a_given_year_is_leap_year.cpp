#include<iostream>
using namespace std;
bool solve(int n){
    if(n%100==0){
       int s=n/100;
       if(s%4==0){
        return true;
       }else{
        return false;
       }
    }else{
        if(n%4==0){
            return true;
        }else{
            return false;
        }
    }
}
int main(){
    int n;
    cout<<"enter the year ";
    cin>>n;
    bool ans = solve(n);
    if(ans==1){
        cout<<"year is leap year ";
    }else{
        cout<<"year is not leap year ";
    }
}
/*enter the year 2025
year is not leap year        
PS D:\question\tcs question>*/
/*enter the year 1700
year is not leap year
PS D:\question\tcs question>*/
/*enter the year 2000
year is leap year 
PS D:\question\tcs question>*/