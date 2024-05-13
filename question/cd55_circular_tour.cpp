#include <iostream>
#include <vector>
using namespace std;
int firstcirculartour(vector<int> pertol, vector<int> distance, int k)
{
    int start = 0;
    int balance = 0;
    int deficent = 0;
    for (int i = 0; i < k; i++)
    {
        balance = balance + pertol[i] - distance[i];
        if (balance < 0)
        {
            deficent = deficent + balance;
            balance = 0;
            start = i + 1;
        }
    }
    if ((deficent + balance) >= 0)
    {
        return start;
    }
    return -1;
}
int main()
{
    vector<int> petrol(3);
    vector<int> distance(3);
    for (int i = 0; i < 3; i++)
    {
        cout << "enter the petrol ";
        cin >> petrol[i];
        cout << "enter the distance ";
        cin >> distance[i];
    }
    int k = 3;
    int p = firstcirculartour(petrol, distance, k);
    cout << "index number is " << p;
}
/*enter the petrol 1
enter the distance 10
enter the petrol 10
enter the distance 20
enter the petrol 3
enter the distance 10
index number is -1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the petrol 1
enter the distance 5
enter the petrol 10
enter the distance 3
enter the petrol 3
enter the distance 4
index number is 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/