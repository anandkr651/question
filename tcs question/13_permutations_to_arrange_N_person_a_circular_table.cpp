#include<iostream>
using namespace std;
int permutation(int n){
    int pro=1;
    if(n==1){
        return 1;
    }
    pro=n*permutation(n-1);
    return pro;
}
int main(){
    int n;
    cout<<"enter the number of person ";
    cin>>n;
    int pro=1;
    int ans = permutation(n-1);
    cout<<"arrange N person around a circular table "<<ans;
}
/*enter the number of person 5
arrange N person around a circular table 24
PS D:\question\tcs question>*/