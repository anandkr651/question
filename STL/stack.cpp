#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<string> s;
    s.push("love");
    s.push("babber");
    s.push("kumar");

    cout<<"top elements of the stack "<<s.top()<<endl;
    cout<<"before pop"<<endl;
    s.pop();
    cout<<"top elements of the stack "<<s.top()<<endl;
    cout<<"size of the stack "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty();
}
/*top elements of the stack kumar 
before pop
top elements of the stack babber
size of the stack 2
empty or not 0
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/