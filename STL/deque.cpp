#include <iostream>
using namespace std;
#include <deque>

int main()
{
    deque<int> d;
    d.push_back(3);
    d.push_front(2);
    d.push_front(1);
    d.push_back(6);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "elements at second " << d.at(1) << endl;
    cout << "first elements " << d.front() << endl;
    cout << "last elements " << d.back() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin());
    cout << "after erase " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}
/*1 2 3 6
2 3
elements at second 3
first elements 2
last elements 3
before erase 2
after erase 1
3
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */