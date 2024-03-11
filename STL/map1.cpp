#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creation
    unordered_map<string,int>m;

    //insertion
    //1
    pair<string,int>p=make_pair("babber",3);
    m.insert(p);

    //2
    pair<string,int>pair2("love",2);
    m.insert(pair2);

    //3
    //what will happen;
    m["mera"]=1;
    m["mera"]=2;

    //serching
    cout<<m["mera"]<<endl;
    cout<<m.at("babber")<<endl;

    //cout<<m.at("unknow")<<endl;     //error
    cout<<m["unknow"]<<endl;         //0  //when we can implement this line then "unknow" types string is created in the memory. 
    cout<<m.at("unknow")<<endl;      //0
    cout<<"size of the unorderred map "<<sizeof(m)<<endl;    //56
    cout<<"size of the unorderred map "<<m.size()<<endl;   //4

    //to check presence
    cout<<m.count("love")<<endl;

    m.erase("mera");
    cout<<"size of the unorderred map "<<m.size()<<endl; 

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    unordered_map<string,int>::iterator it=m.begin();
    while(it !=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}
/*2
3
0
0
size of the unorderred map 56
size of the unorderred map 4 
1
size of the unorderred map 3 
unknow 0
love 2
babber 3

unknow 0
love 2
babber 3
PS C:\Users\DELL\OneDrive\Desktop\question\STL>*/