#include <iostream>
using namespace std;

int main()
{
    int a[10] = {4, 6, 8, 10, 1, 3, 5, 7, 0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i] + a[j] == 9)
            {
                cout << i << "  "
                     << " " << j;
                break;
            }
            break;
        }
    }
    return 0;
}