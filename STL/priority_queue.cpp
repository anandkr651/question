#include <iostream>
using namespace std;
#include <queue>

int main()
{
    priority_queue<int> maxi;

    maxi.push(8);
    maxi.push(4);
    maxi.push(7);
    maxi.push(2);
    maxi.push(5);

    cout << "size " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(5);
    mini.push(9);
    mini.push(2);
    mini.push(4);
    mini.push(1);

    cout << "size " << mini.size() << endl;
    int p = mini.size();
    for (int i = 0; i < p; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}
/*size 5    
8 7 5 4 2 
size 5    
1 2 4 5 9 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */