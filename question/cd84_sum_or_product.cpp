#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int n,long long int q){
    long long int sum=0,product=1;
    if(q==1){
        for(int i=1;i<=n;i++){
            sum +=i;
        }
        return sum;
    }else{
         for(int i=1;i<=n;i++){
            product = (product*i)%1000000007;
        }
        return product;
    }
}
int main()
{
    long long int n,q;
    cout<<"type \"1\" for addition of the data and type \"2\" for multiplication ";
    cin>>q;
    cout<<"enter the number ";
    cin>>n;
    long long int ans = solve(n,q);
    cout<<"answer is "<<ans;
}
/*type "1" for addition of the data and type "2" for multiplication 1
enter the number 199999
answer is 19999900000
PS D:\question\question>*/
/*type "1" for addition of the data and type "2" for multiplication 2
enter the number 199999
answer is 752535541
PS D:\question\question>*/