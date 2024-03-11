#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    map<string,int> marks;
    marks["anand"]=98;
    marks["ankit"]=100;
    marks["aditya"]=99;
    marks.insert({{"raja",1001},{"dezy",200}});
    map<string,int> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
}
//first value of map is arrange in ascending order 1----9,a-------z this types
/*aditya 99
anand 98
ankit 100
dezy 200
raja 1001
PS C:\Users\DELL\OneDrive\Desktop\question\STL>*/