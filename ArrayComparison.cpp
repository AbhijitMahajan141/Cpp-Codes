#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    if (count == n)
    {
        cout << "Arrays are Equal!";
    }
    else
    {
        cout << "Array's are Not Equal!" << endl;
        cout << "Array's have only " << count << " element's same..";
    }
}