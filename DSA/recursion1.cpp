#include <iostream>
using namespace std;

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    recursion(n - 1);
    cout << n;
}
int main()
{
    int x = 7;
    recursion(x);
}