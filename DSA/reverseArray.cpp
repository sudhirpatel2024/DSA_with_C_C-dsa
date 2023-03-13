#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int i, int j)
{

    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

void Print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    reverse(a, 0, 6);
    Print(a, 7);
    return 0;
}