#include<iostream>
using namespace std;
 int addDigits(int num) {
        int sum=0;
        while(num!=0){
            int digit=num%10;
            sum +=digit;
            num=num/10;
        }
        return sum;
    }
int main(){
   int sum = addDigits(38);
   while(sum>9){
    sum = addDigits(sum);
   }
   cout<<sum;
}
/*2
PS D:\question\tcs question>*/