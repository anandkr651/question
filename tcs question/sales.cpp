#include <iostream>
using namespace std;
int main()
{
    int sales[6];
    cout << "enter the sales";
    for (int i = 0; i < 6; i++)
    {
        cin >> sales[i];
    }
    cout << "see your day by sales" << endl;
    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Monday : " << sales[i] << endl;
            break;
        case 1:
            cout << "Tuesday : " << sales[i] << endl;
            break;
        case 2:
            cout << "Wednesday : " << sales[i] << endl;
            break;
        case 3:
            cout << "Thursday : " << sales[i] << endl;
            break;
        case 4:
            cout << "Friday : " << sales[i] << endl;
            break;
        case 5:
            cout << "Saturday : " << sales[i] << endl;
            break;
        default:
            break;
        }
    }
}
/*enter the sales 10 20 30 40 50 60
see your day by sales
Monday : 10
Tuesday : 20
Wednesday : 30
Thursday : 40
Friday : 50
Saturday : 60
PS D:\question\tcs question>*/