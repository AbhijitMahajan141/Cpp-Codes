#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, m;
    // cin >> n >> m;
    // int a[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // Searching matrix
    // int x;
    // cin >> x;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr[i][j] == x)
    //         {
    //             cout << "Element is Found at: " << i << " " << j;
    //         }
    //     }
    // }

    // Spiral order matrix traversal @
    // int rs = 0, re = n - 1, cs = 0, ce = m - 1;
    // while (rs <= re && cs <= ce)
    // {
    //     // for row start
    //     for (int col = cs; col <= ce; col++)
    //     {
    //         cout << a[rs][col] << " ";
    //     }
    //     rs++;

    //     // for column end
    //     for (int row = rs; row <= re; row++)
    //     {
    //         cout << a[row][ce] << " ";
    //     }
    //     ce--;

    //     // for row end
    //     for (int col = ce; col >= cs; col--)
    //     {
    //         cout << a[re][col] << " ";
    //     }
    //     re--;

    //     // for column start
    //     for (int row = re; row >= rs; row--)
    //     {
    //         cout << a[row][ce] << " ";
    //     }
    //     cs++;
    // }

    // Transpose of a nxn matrix(rows to column and vice versa)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < m; j++)
    //     {
    //         int temp = a[i][j];
    //         a[i][j] = a[j][i];
    //         a[j][i] = temp;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // Multiplication of 2 matrix
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}