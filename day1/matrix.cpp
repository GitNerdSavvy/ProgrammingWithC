#include <iostream>
using namespace std;
int mini(int a, int b, int c, int d)
{
    return (a < b ? (a < c ? (a < d ? a : d) : (c < d ? c : d)) : (b < c ? (b < d ? b : d) : (c < d ? c : d)));
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            cout << n - mini(i - 1, j - 1, 2 * n - i - 1, 2 * n - j - 1);
        }
        cout << endl;
    }

    return 0;
}