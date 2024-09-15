#include <iostream>
using namespace std;

void lastOccLTR(string &s, int &ans, int i, char target)
{
    if (i >= s.size())
    {
        return;
    }

    if (s[i] == target)
    {
        ans = i;
    }

    lastOccLTR(s, ans, i + 1, target);
}
void lastOccRTL(string &s, int &ans, int i, char target)
{
    if (i < 0)
    {
        return;
    }

    if (s[i] == target)
    {
        ans = i;
        return;
    }

    lastOccRTL(s, ans, i - 1, target);
}
int main()
{
    string s = "abcdyeaddas";
    int ans = -1;
    char target = 'd';
    lastOccLTR(s, ans, 0, target);
    cout << ans << endl;
    int ans2 = -1;
    lastOccRTL(s, ans2, s.size() - 1, target);
    cout << ans2;
}