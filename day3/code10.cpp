#include <iostream>
#include <string.h>
using namespace std;
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void revStr(char str[10], int l, int h)
{
    while (l < h)
    {

        swap(&str[l], &str[h]);
        revStr(str, ++l, --h);
    }
}
int main()
{
    char s[10];
    cin >> s;
    int n = strlen(s);
    // cout << s << s[0] << endl;
    revStr(s, 0, n - 1);
    cout << s << endl;

    return 0;
}