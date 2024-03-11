#include<iostream>
using namespace std;

class vector{
    public:
    int *arr;
    int size;
    vector(int m){
     size=m;
     arr=new int[size];    //important
    }
    int dotproduct(vector &v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d +=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=2;

    vector v2(3);
    v2.arr[0]=5;
    v2.arr[1]=6;
    v2.arr[2]=7;
    int a= v1.dotproduct(v2);
    cout<<a<<endl;   
/*52
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

    //error  because of int 
    // vector v1(3);
    // v1.arr[0]=4.1;
    // v1.arr[1]=3.1;
    // v1.arr[2]=2.1;

    // vector v2(3);
    // v2.arr[0]=4.1;
    // v2.arr[1]=3.1;
    // v2.arr[2]=2.1;
    // float a= v1.dotproduct(v2);
    // cout<<a<<endl;
    return 0;
}


// #include<iostream>
// using namespace std;

// template < class T>
// class vector{
//     public:
//     T*arr;
//     int size;
//     vector(int m){
//      size=m;
//      arr=new T[size];
//     }
//     T dotproduct(vector &v)
//     {
//         T d=0;
//         for(int i=0;i<size;i++)
//         {
//             d +=this->arr[i]*v.arr[i];
//             cout<<"hello"<<v.arr[i]<<endl;
//         }
//         return d;
//     }
// };
// int main()
// {
//     // vector<int>v1(3);
//     // v1.arr[0]=4;
//     // v1.arr[1]=3;
//     // v1.arr[2]=2;

//     // vector<int>v2(3);
//     // v2.arr[0]=5;
//     // v2.arr[1]=6;
//     // v2.arr[2]=7;
//     // int a= v1.dotproduct(v2);
//     // cout<<a<<endl;   
// /*hello5
// hello6
// hello7
// 52
// PS C:\Users\DELL\OneDrive\Desktop\c++> */

//     // vector<float>v1(3);
//     // v1.arr[0]=4.1;
//     // v1.arr[1]=3.1;
//     // v1.arr[2]=2.1;

//     // vector<float>v2(3);
//     // v2.arr[0]=4.2;
//     // v2.arr[1]=3.2;
//     // v2.arr[2]=2.2;
//     // float b= v1.dotproduct(v2);
//     // cout<<b<<endl;
//     return 0;
// }
// /*hello4.2
// hello3.2
// hello2.2
// 31.76   
// PS C:\Users\DELL\OneDrive\Desktop\c++> */