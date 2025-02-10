#include<bits/stdc++.h>
using namespace std;
void findRoot(int a,int b,int c){
    int d = pow(b,2)-4*a*c;
    int root1,root2;
    if(d==0){
        cout << "Roots are real and same \n";
        cout<<(-b/2*a);
    }else if(d>0){
        cout << "Roots are real and different \n";
        cout<<(-b+sqrt(d))/2*a<<" , "<<(-b-sqrt(d))/2*a;
    }else{
       cout << "Roots are complex \n";
       cout<<(-b/2*a)<<" +i"<<sqrt(abs(d))<<" , "<<(-b/2*a)<<" -i"<<sqrt(abs(d));
    }
}
int main(){
    int a,b,c;
    cout<<"enter the number of a,b,c ";
    cin>>a>>b>>c;
    findRoot(a,b,c);
    return 0;
}
/*enter the number of a,b,c 1
1
1
Roots are complex 
0 +i1.73205 , 0 -i1.73205
PS D:\question\tcs question>*/

/*enter the number of a,b,c 1
7
12
Roots are real and different
-3 , -4
PS D:\question\tcs question>*/