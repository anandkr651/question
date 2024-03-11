#include <iostream>
using namespace std;
void swapalt(int x[], int size)
{
    int i;
    for (i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(x[i], x[i + 1]);//to see
        }
    }
}
void print(int y[], int pos)
{
    int c;
    for (c = 0; c < pos; c++)
    {
        cout << y[c];
    }
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {9, 8, 7, 6, 5};
    cout << "even position" << endl;
    swapalt(even, 6);
    print(even, 6);
    cout << "\nodd position" << endl;
    swapalt(odd, 5);
    print(odd, 5);
    return 0;
}
/*even position
214365
odd position
89675
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/

/*without using std swap*/
#include <iostream>
using namespace std;
void swapalt(int x[], int size)
{
    int i;
    for (i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int t;
            t = x[i];
            x[i] = x[i + 1];
            x[i + 1] = t;
        }
    }
}
void print(int y[], int pos)
{
    int c;
    for (c = 0; c < pos; c++)
    {
        cout << y[c];
    }
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {9, 8, 7, 6, 5};
    cout << "even position" << endl;
    swapalt(even, 6);
    print(even, 6);
    cout << "\nodd position" << endl;
    swapalt(odd, 5);
    print(odd, 5);
    return 0;
}
/*even position
214365
odd position
89675
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\array>*/