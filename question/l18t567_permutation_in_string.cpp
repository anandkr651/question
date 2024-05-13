#include <iostream>
using namespace std;
class solution
{
private:
    bool checkequal(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkinclusion(string s1, string s2)
    {
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int count2[26] = {0};
        int i = 0;
        for (i = 0; i < s1.length(); i++)
        {
            int index = s2[i] - 'a';
            count2[index]++;
        }
        if (checkequal(count1, count2))
            return 1;
        while (i < s2.length() && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;

            index = s2[i - s1.length()] - 'a';
            count2[index]--;
            i++;

            if (checkequal(count1, count2))
                return 1;
        }
        return 0;
    }
};
int main()
{
    string s1, s2;
    cout << "enter the first string" << endl;
    cin >> s1;
    cout << "enter the second string" << endl;
    cin >> s2;
    solution t;
    cout << t.checkinclusion(s1, s2);
}
/*enter the first string
ab
enter the second string
eidbaooo
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/