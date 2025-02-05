#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle) {
        int n=columnTitle.length(); //LENGTH OF THE STRING
        int total=0,sqt=n-1;
        for(int i=0;i<n;i++){
            int pos= (int)columnTitle[i]; //CONVERT STRING INTO ASCII VALUE LIKE 'A'=65
            if(i!=n-1){      //THIS CONDITION FOLLOW UNTILL TO REACH THE i=n-1 
           total =total+pow(26,sqt)*(pos-64);
            }
            sqt--;
            if(i==n-1){ //THIS CONDITION FOLLOW THE LAST CHARACTER OF THE STRING
            total = total+(pos-64);
            }
        }
    return total;
    }
int main(){
    string columnTitle;
    cout<<"enter the string only in the upper case letter ";
    getline(cin,columnTitle);
    int ans=titleToNumber(columnTitle);
    cout<<ans;
}
/*enter the string only in the upper case letter AAA
703
PS D:\question\tcs question>*/
/*enter the string only in the upper case letter AA
27
PS D:\question\tcs question>*/