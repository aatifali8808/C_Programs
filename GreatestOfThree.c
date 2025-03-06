#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Entre 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b) && (a > c))
    {
        printf("%d is a Greater number", a);
    }
    else if ((b > c) && (b > c))
    {
        printf("%d is a Greater number", b);
    }
    else if ((c > a) && (c > b))
    {
        printf("%d is a Greater number", c);
    }
    else
    {
        printf("You entre invalid input");
    }

    return 0;
}
