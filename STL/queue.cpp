// #include<iostream>
// using namespace std;
// #include<queue>

// int main()
// {
//     queue<string> s;
//     s.push("love");
//     s.push("babber");
//     s.push("kumar");
    
//     cout<<"top elements of the queue "<<s.front()<<endl;
//     cout<<"size of the queue "<<s.size()<<endl;
//     cout<<"before pop"<<endl;
//     s.pop();
//     cout<<"top elements of the queue "<<s.front()<<endl;
//     cout<<"size of the queue "<<s.size()<<endl;
//     cout<<"empty or not "<<s.empty();
// }
/*top elements of the queue love
size of the queue 3
before pop
top elements of the queue babber
size of the queue 2
empty or not 0
PS C:\Users\DELL\OneDrive\Desktop\question\STL>*/


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    cout<<"top elements of the queue "<<q.front()<<endl;
    q.push(15);
    cout<<"top elements of the queue "<<q.front()<<endl;
    q.push(18);
    cout<<"top elements of the queue "<<q.front()<<endl;
    cout<<"size of the queue "<<q.size()<<endl;
    q.pop();
    cout<<"size of the queue "<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty "<<endl;
    }
}