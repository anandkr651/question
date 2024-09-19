#include <iostream>
using namespace std;
#include <array>

int main()
{
    int basic[4] = {1, 2, 3, 4};

    array<int, 4> a = {9, 8, 7, 6};
    int sie = a.size();
    for (int i = 0; i < sie; i++)
    {
        cout << a[i] << endl;
    }
    cout << "elements at second index " << a.at(2) << endl;
    cout << "empty or not " << a.empty() << endl;
    cout << "first elements " << a.front() << endl;
    cout << "last elements " << a.back() << endl;
}
/*9
8
7
6
elements at second index 7
empty or not 0
first elements 9
last elements 6
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */