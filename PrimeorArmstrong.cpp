#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    // Prime Number
    //  for (int i = 2; i < n; i++) traditional way to find prime
    //  for (int i = 2; i <= sqrt(n); i++) // if square root of a number is not prime then the number itself is not prime
    //  {
    //      if (n % i == 0)
    //      {
    //          cout << "Non-Prime" << endl;
    //          flag = 1;
    //          break;
    //      }
    //  }
    //  if (flag == 0)
    //  {
    //      cout << "Prime";
    //  }

    // reverse number
    // int reverse = 0;
    // while (n > 0)
    // {
    //     int lastdigit = n % 10;
    //     reverse = reverse * 10 + lastdigit;
    //     n = n / 10;
    // }
    // cout << reverse;

    // Armstrong Number 153 =1^3+5^3+3^3 =153
    int sum = 0;
    int orignaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == orignaln)
    {
        cout << orignaln << " :is a Armstrong Number";
    }
    else
    {
        cout << orignaln << " :is NOT a Armstrong Number";
    }

    return 0;
}