#include <stdio.h>
int main()
{
    int a = 10, b = 21, c = 9;
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}