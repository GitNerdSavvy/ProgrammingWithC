#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}
int main()
{

    int n;
    cin >> n;
    int a = 1,ans;
    while (n--)
    {
         ans = fib(a++);
    }
    cout << ans << endl;

    return 0;
}