#include <stdio.h>

int binarys(int n, char *a);
int main()
{

    char *c = "abcefghijklmnop";
    int lenth = 15;
    binarys(lenth, &c);
    return 0;
}

int binarys(int n, char *a)
{
    if (n == 0)
    {
        printf("%s", a);
        return 0;
    }

    a[n - 1] = 0;
    binarys(n - 1, a);
    a[n - 1] = 1;
    binarys(n - 1, a);
    return 0;
}