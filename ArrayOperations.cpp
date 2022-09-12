#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main()
{
    int mx = INT_MIN;
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // max ele in array
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    cout << mx;

    // sum of all the subarray of a given array
    // int curr_sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     curr_sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         curr_sum += a[j];
    //         cout << curr_sum << endl;
    //     }
    // }

    // longest Arithematic subarray
    // int ans = 2;
    // int pd = a[1] - a[0];
    // int j = 2;
    // int curr = 2;
    // while (j < n)
    // {
    //     if (pd == a[j] - a[j - 1])
    //     {
    //         curr++;
    //     }
    //     else
    //     {
    //         pd = a[j] - a[j - 1];
    //         curr = 2;
    //     }
    //     ans = max(ans, curr);
    //     j++;
    // }
    // cout << ans;

    // Record Breakers - given no. of visitors on N conssecutive days
    // a day is record breaking if -1. the number of visitors on the day is strictly
    // larger than the number of visitors on each of the previous day.
    // 2. either it is the last day or the number of visitors on the day is strictly
    // larger than the number of visitors on the following day(note very first day can be record breaking)
    // int a[n + 1]; // because we are checking next elem as well
    // a[n] = -1;
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int prev_max = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] > a[i + 1] && a[i] > prev_max)
    //     {
    //         prev_max = a[i];
    //         index = i;
    //     }
    // }
    // cout << "Record Breaking at: " << index << " with: " << prev_max << " People";

    // First repeating element in array
    // const int N = 100; // 1e6 + 2;
    // int idx[N];
    // for (int i = 0; i < N; i++)
    // {
    //     idx[i] = -1;
    // }
    // int minidx = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if (idx[a[i]] != -1)
    //     {
    //         minidx = min(minidx, idx[a[i]]);
    //     }
    //     else
    //     {
    //         idx[a[i]] = i;
    //     }
    // }
    // if (minidx == INT_MAX)
    // {
    //     cout << "-1";
    // }
    // else
    // {
    //     cout << minidx;
    // }

    // given an unsorted array a with size n find a continuous subarray which adds to a given number s
    // output start and end index of subarray
    // int s;
    // cin >> s;
    // int i = 0, j = 0, st = -1, en = -1, sum = 0;
    // while (j < n && sum + a[j] <= s)
    // {
    //     sum += a[j];
    //     j++;
    // }
    // if (sum == s)
    // {
    //     cout << i << " " << j;
    //     return 0;
    // }
    // while (j < n)
    // {
    //     sum += a[j];
    //     while (sum > s)
    //     {
    //         sum -= a[i];
    //         i++;
    //     }
    //     if (sum == s)
    //     {
    //         st = i;
    //         en = j;
    //         break;
    //     }
    //     j++;
    // }
    // cout << i << " " << j;

    // Smallest positive missing number - given array n find smallest positve num from array
    // const int N = 1e6 + 2;
    // bool check[N];
    // for (int i = 0; i < N; i++)
    // {
    //     check[i] = false;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] >= 0)
    //     {
    //         check[a[i]] = 1;
    //     }
    // }
    // int ans = -1;
    // for (int i = 1; i < N; i++)
    // {
    //     if (check[i] == false)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    // cout << ans;

    return 0;
}