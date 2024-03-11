#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
            cout<<v[i]<<" ";
    } 
    cout<<endl;
}
int main()
{
    vector<int>vec1;            //zero length vector
    int elements,size;
    cout<<"enter the size of your vector";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter an element to add to this vector";
        cin>>elements;
        vec1.push_back(elements);
    }
    display(vec1);

    vec1.pop_back();
    display(vec1);

    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter,566);
    display(vec1);

    vector<int>::iterator ite=vec1.end();
    vec1.insert(ite,509);
    display(vec1);

    vector<int>::iterator it=vec1.begin();
    vec1.insert(it+2,509);
    display(vec1);

    vector<int>::iterator ita=vec1.begin();
    vec1.insert(ita+3,4,59);
    display(vec1);
    return 0;
}
/*enter the size of your vector5
enter an element to add to this vector8
enter an element to add to this vector6
enter an element to add to this vector9
enter an element to add to this vector1
enter an element to add to this vector4
8 6 9 1 4 
8 6 9 1   
566 8 6 9 1 
566 8 6 9 1 509
566 8 509 6 9 1 509
566 8 509 59 59 59 59 6 9 1 509
PS C:\Users\DELL\OneDrive\Desktop\c++\stl>*/

#include<iostream>
#include<vector>
using namespace std;

template<class t>
void display(vector<t> &v)
{
cout<<"display this vector\n";
    for(int i=0;i<v.size();i++)
    {
            cout<<v[i]<<" ";
            cout<<v.at(i)<<" ";
    } 
    cout<<endl;
}
int main()
{
    vector<int>vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int>vec4(6,3);

    display(vec1);

    vec2.push_back('5');
    display(vec2);

    display(vec3);

    display(vec4);
    cout<<vec4.size();
    return 0;
}
/*display this vector     

display this vector     
        5 5 
display this vector     
        
display this vector     
3 3 3 3 3 3 3 3 3 3 3 3 
6
PS C:\Users\DELL\OneDrive\Desktop\c++>*/