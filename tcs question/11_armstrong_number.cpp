#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int n){
    int sum=0,count=0;
    int temp,ans;
    temp=ans=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    while(n!=0){
        int digit=n%10;
        sum=sum+pow(digit,count);
        n=n/10;
    }
    if(ans==sum){
        return true;
    }else{
        return false;
    }
}
int main(){
    bool ans=armstrong(1253);
    // bool ans=armstrong(1634);
    if(ans==1){
        cout<<"this number is an armstrong number";
    }else{
        cout<<"this number is not a armstrong number";
    }
}
/*this number is not a armstrong number
PS D:\question\tcs question>*/

/*this number is an armstrong number
PS D:\question\tcs question> */