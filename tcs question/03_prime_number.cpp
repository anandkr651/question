#include<iostream>
using namespace std;
bool solve(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(n==i){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool ans = solve(n);
    if(ans==1){
        cout<<n<<" this number is prime number ";
    }else{
        cout<<n<<" this number is not a prime number ";
    }
}
/*enter the number 1
1 this number is not a prime number
PS D:\question\tcs question>*/
/*enter the number 2
1 this number is a prime number
PS D:\question\tcs question>*/
/*enter the number 6
1 this number is not a prime number
PS D:\question\tcs question>*/