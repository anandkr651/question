/*A factory produces pens and pencils. The total number of products and the total number of components (pens need 2 components, pencils need 1 component) are given. Determine how many pens and pencils the factory should manufacture.

• Input: Two integers representing the total number of products P and total components C.
Example:
Input: • 100 • 160
Output: Pens=60 Pencils=40

Implementation: x--pen  y--pencil
x+y=p ..... 1  y=p-x 
2x+y=c .... 2

2x+p-x=c =>x+p=c =>x=c-p 
y=p-x =>y=p-c+p =>y=2p-c */

#include<bits/stdc++.h>
using namespace std;
void calculateProducts(int p,int c){
    if(c<p || c>2*p){
        cout<<"invalid input";
        return ;
    }
    int pen = c-p;
    int pencil = 2*p-c;
    cout<<"Number of pen is "<<pen<<" Number of pencil is "<<pencil;
}
int main(){
    int p, c;
    cout<<"enter the product and component";
    cin>>p>>c;
    calculateProducts(p,c);
}
/*enter the product and component100
160
Number of pen is 60 Number of pencil is 40
PS D:\question\tcs question>*/