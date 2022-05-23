#include <stdio.h>

int main()
{

    char[] c = "abcefghijklmnop";

    binarys(len(c), c);
    return 0;
}

int binarys(int n, char[] a)
{
    if (n < 1)
    {
        printf("%s", a);
    }
    else
    {
        a[n - 1] = 0;
        binary(n - 1, a);
        a[n - 1] = 1;
        binary(n - 1, a);
    }
    return 0
}