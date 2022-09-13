#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1]; // n+1 cause of the \0 character

    // cin >> arr;

    // Check Palindrome
    // bool check = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr[n - 1 - i])
    //     {
    //         check = 0;
    //         break;
    //     }
    // }
    // if (check == true)
    // {
    //     cout << "Word is a Palindrome!" << endl;
    // }
    // else
    // {
    //     cout << "Word is not a Palindrome!";
    // }

    // Largest word in a sentence and print the word
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLength = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLength > maxLen)
            {
                maxLen = currLength;
                maxst = st;
            }
            currLength = 0;
            st = i + 1;
        }
        else
        {
            currLength++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[maxst + i];
    }

    return 0;
}