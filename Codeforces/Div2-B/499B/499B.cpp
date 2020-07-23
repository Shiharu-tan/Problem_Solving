#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> words1;
    string shorter[m], lec[n], s1, s2, s, out = "";
    for (int i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
        words1.push_back(s1);
        if (s2.size() < s1.size())
        {
            shorter[i] = s2;
        }
        else
        {
            shorter[i] = s1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        vector<string>::iterator it = find(words1.begin(), words1.end(), s);
        int index = distance(words1.begin(), it);
        if (i != n - 1)
        {
            out += shorter[index];
            out += " ";
        }
        else
        {
            out += shorter[index];
        }
    }
    cout << out << endl;
    return 0;
}
