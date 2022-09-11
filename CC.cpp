#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime Number" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}