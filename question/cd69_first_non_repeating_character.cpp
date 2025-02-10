#include<bits/stdc++.h>
using namespace std;
char nonrepeate(string str)
{
    unordered_map<char,int>count;
    queue<int>q;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        count[ch]++;
        q.push(ch);
    }
    while(!q.empty())
    {
        if(count[q.front()]>1)
        {
            q.pop();
        }
        else{
            return q.front();
            break;
        }
    }
    return str[0];
}
int main()
{
    string ch;
    cout<<"enter the string ";
    getline(cin,ch);
    cout<<ch<<endl;
    char p = nonrepeate(ch);
    cout<<p;
}
/*enter the string aaabcdb
aaabcdb
c
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the string abcd
abcd
a
PS C:\Users\DELL\OneDrive\Desktop\question\question> */
/*enter the string aabbcc
aabbcc
a
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include<bits/stdc++.h>
using namespace std;
char nonrepeate(string str)
{
    unordered_map<char,int>count; //we can also use map
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        count[ch]++;
    }
    char s=str[0]; //all character are repeat
    for(auto x:str){
        if(count[x]==1){
            return x;
        }
    }
    // you can think that we can write the code in this way why we can not write this way because
    // NOTE --> You're using an unordered_map<char, int> to store character frequencies, but unordered_map does not maintain insertion order.
    // NOTE --> You're using an map<char, int> to store character frequencies, but map store in sorted order. eg---> bcda ->a(incorrect) -->b(correct)
    // for(auto x:count){
    //     if(x.second==1){
    //         return x.first;
    //     }
    // }

    return s;
}
int main()
{
    string ch;
    cout<<"enter the string ";
    getline(cin,ch);
    cout<<ch<<endl;
    char p = nonrepeate(ch);
    cout<<p;
}
/*enter the string aaabcdb
aaabcdb
c
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the string abcd
abcd
a
PS C:\Users\DELL\OneDrive\Desktop\question\question> */
/*enter the string aabbcc
aabbcc
a
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/