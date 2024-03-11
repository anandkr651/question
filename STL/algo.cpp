#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);

    cout<<"finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound -->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"lower bound -->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;
    int c=8;
    int k=max(a,max(b,c));
    cout<<"max "<<k<<endl;
    cout<<"min "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a-->"<<a<<endl;

    string abcd="abcd jkkxj9i";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse is "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate one position "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"sorted the vector "<<endl;
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
}
/*finding 6--> 1  
lower bound -->2
lower bound -->1
max 5
min 3
a-->5
reverse is i9jxkkj dcba
after rotate one position
5 6 8 9 3
sorted the vector
3 5 6 8 9
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/



//    ################### range based loop in c++ ######################################
/*
          1. it was introduce in c++11.
          2. it itrates for loop over a range.
          syntax :----
             for(range declaration : range_expression)
             loop_statements;
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={5,4,7,3,9,2};
//     for(int i:arr)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(int n:{2,6,4,9,0})
//     {
//         cout<<n<<" ";
//     }
//     cout<<endl;
//     string str="my name is anand";
//     for(char ch:str)
//     {
//         cout<<ch<<" ";
//     }cout<<endl;
// }
/*5 4 7 3 9 2 
2 6 4 9 0 
m y   n a m e   i s   a n a n d 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */
