#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = (n & mask);
    return (n | (value << pos));
}

int main()
{
    // get bit of the given position
    cout << "The Bit is: " << getBit(5, 0) << endl; // 5 - 0101

    // set a bit at given position
    cout << "Number after bit set: " << setBit(5, 1) << endl; // 5-0101 we insert the 1 at pos -1 it becomes 0111 i.e 7

    // clear bit at given position
    cout << "Number after bit clear: " << clearBit(5, 2) << endl;

    // update bit at given position with given bit
    cout << "Number after bit update: " << updateBit(5, 1, 1) << endl;

    return 0;
}