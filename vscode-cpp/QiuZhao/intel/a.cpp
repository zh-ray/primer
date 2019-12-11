#include <stdio.h>

void demo()
{
    printf("1");
}
int main()
{
    unsigned int a = 0x1234;
    a = ((a & 0x5555) << 1) | ((a & 0xaaaa) >> 1);
    printf("0x%x", a);
    char b[5] = "123";
    char *c = b;
    char *d = c;
    printf("%s", d);
}