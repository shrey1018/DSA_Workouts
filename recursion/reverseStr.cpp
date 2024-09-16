#include <iostream>
using namespace std;
void reverseStr(string &s, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // processing
    swap(s[start], s[end]);

    // Recursive relation
    reverseStr(s, start + 1, end - 1);
}
int main()
{
    string s = "nothing";

    reverseStr(s, 0, s.size() - 1);

    cout << "reversed str :" << s;
}