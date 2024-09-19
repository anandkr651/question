#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v;
    cout << "how many space is allocated for the elements " << v.capacity() << endl;

    v.push_back(1);
    cout << "how many space is allocated for the elements " << v.capacity() << endl;

    v.push_back(2);
    cout << "how many space is allocated for the elements " << v.capacity() << endl;

    v.push_back(3);
    cout << "how many space is allocated for the elements " << v.capacity() << endl; // magic

    cout << "how many elements are there in the array " << v.size() << endl;
    cout << "elements at 2nd index " << v.at(2) << endl;
    cout << "empty or not " << v.empty() << endl;
    cout << "first elements " << v.front() << endl;
    cout << "last elements " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
    cout << "how many space is allocated for the elements " << v.capacity() << endl; // magic
}
/*how many space is allocated for the elements 0
how many space is allocated for the elements 1
how many space is allocated for the elements 2
how many space is allocated for the elements 4
how many elements are there in the array 3
elements at 2nd index 3
empty or not 0
first elements 1
last elements 3
before pop
1 2 3
after pop
1 2
before clear size 2
after clear size 0
how many space is allocated for the elements 4
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> a(5, 1);
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
}
/*print a
1 1 1 1 1
print last
1 1 1 1 1
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

//   ************************  iterator  ***********
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> res)
{
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}
int main()
{
    int elements, size;
    vector<int> ans;
    cout << "enter the size of your vector ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an elements to add to this vector ";
        cin >> elements;
        ans.push_back(elements);
    }
    display(ans);

    ans.pop_back();
    display(ans);

    vector<int>::iterator iter = ans.begin();
    ans.insert(iter, 566);
    display(ans);

    ans.insert(iter + 1, 66);
    display(ans);

    ans.insert(iter + 4, 5, 86);
    display(ans);
}
/*enter the size of your vector 5
enter an elements to add to this vector 1
enter an elements to add to this vector 2
enter an elements to add to this vector 3
enter an elements to add to this vector 4
enter an elements to add to this vector 5
1 2 3 4 5
1 2 3 4
566 1 2 3 4
566 66 1 2 3 4
566 66 1 2 86 86 86 86 86 3 4
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

#include <iostream>
using namespace std;
#include <vector>
int main()
{
    cout << "enter the number";
    vector<int> x(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    cout << "display the number";
    for (int s : x)
    {
        cout << s << " ";
    }
}
/*enter the number4
3
1
7
display the number4 3 1 7 
PS D:\question\STL>*/