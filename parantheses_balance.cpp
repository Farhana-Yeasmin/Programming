#include <bits/stdc++.h>
using namespace std;
int is_balanced(string s)
{

    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
                return 0;
            else
            {
                if (s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (s[i] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
            }
        }
    }
    if (st.empty())
        return 1;
    return 0;
}
int main()
{

    string s;
    int testcase;
    cin >> testcase;
    getchar();
    while (testcase--)

    {

        getline(cin, s);

        if (is_balanced(s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}