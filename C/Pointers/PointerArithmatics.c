#include <stdio.h>
int main()
{
    long long a = 1025;
    int *p = &a;
    printf("size of int %d\n", sizeof(int));
    printf("address=%d value= %d", p, *p);
    char *p1;

    p1 = (char *)p;
    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address=%d  value=%d\n", p1, *p1);
    printf("Address=%d  value=%d\n", p1, *p1++);
    printf("Address=%d  value=%d\n", p1, *p1++);
    printf("%d", sizeof(long));

    return 0;
}