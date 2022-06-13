#include <stdio.h>
int printtime()
{
    printf("%s", __TIME__);
    return 0;
}
int main()
{
    // unsigned short i = 1;
    // int j = -4;
    // printf("%hi", i + j);
    printtime();
    return 0;
}
