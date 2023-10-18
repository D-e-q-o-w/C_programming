#include <stdio.h>
int main(void)
{
    int a=1;
    while (a <= 15)
    {
        printf("%4d  Kg = %4d  g\n",
               a,(a) * 1000);
               a =a + 1;
    }
    return 0;
}
