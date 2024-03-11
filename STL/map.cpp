#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="babber";
    m[5]="kumar";
    m[2]="love";
    m[8]="anand";

    m.insert({4,"therom"});
    cout<<"before erase"<<endl;
    for(auto i :m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"find -13 -->"<<m.count(-13)<<endl;
    
    m.erase(2);
    cout<<"after erase "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl; 
    }
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}
/*before erase
1 babber    
2 love       
4 therom     
5 kumar      
8 anand      
find -13 -->0
after erase  
1 babber     
4 therom     
5 kumar      
8 anand
5
8
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/