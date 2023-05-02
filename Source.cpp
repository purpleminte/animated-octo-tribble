#include <iostream>

using namespace std;

int recursiveFactorial(int N)
{
    if (N == 0)
    {
        return 1;
    }
    else
    {
        //the function calls itself:
        return (N * recursiveFactorial(N - 1));
    }
}

int hanoi(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    else
    {
        return (hanoi(N-1)*2 + 1);
    }
}

int main()
{
    int tower;
    cout << "How tall is the tower? -> ";
    cin >> tower;
    cout << endl << "The tower takes [" << hanoi(towr) << "] steps to completely move." << endl;
}

// -   1   2   3   4   5   6   7

//a.. ... ... ... ... ... ... ..a
//b.. b.. ... .a. .a. ... ..b ..b
//c.. c.a cba cb. .bc abc a.c ..c

//     a > b > a > c > a > b > a > fin
