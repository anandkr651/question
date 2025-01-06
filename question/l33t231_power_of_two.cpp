// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     if (n == 0)
//         return 1;

//     int smaller = power(n - 1);
//     int bigger = 2 * smaller;
//     return bigger;
// }
// int main()
// {
//     int n;
//     cout << "enter the number ";
//     cin >> n;
//     int s = power(n);
//     cout << s;
//     return 0;
// }
/*enter the number 10
1024
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/

#include<bits/stdc++.h>
using namespace std;
bool solve(int number)
{
    if(number == 0){
        return false;
    }
    if(number == 1){
        return true;
    }
    while(number%2==0){
        number=number/2;
        if(number==0||number==1){
            return true;
        }
    }
    return false;
}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    bool s = solve(number);
    if(s==1){
        cout<<"it the power of two ";
    }else{
        cout<<"it is not the power of two";
    }
}
/*enter the number 16
it the power of two      
PS D:\question\question>*/
/*enter the number 7
it is not the power of two
PS D:\question\question>*/