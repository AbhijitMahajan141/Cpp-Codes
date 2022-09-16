#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abhijitmahajan";
    // convert to uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // convert to lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    // highest frequency of a character.
    int freq[26]; // 26 because there are 26 character alphabets
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++; // s[i]-a means a-ath index ie 0, b-a index=1,c-a index =2 and so on....
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;

    return 0;
}