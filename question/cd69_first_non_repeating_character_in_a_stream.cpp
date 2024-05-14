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
a
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/