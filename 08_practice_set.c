#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("input the no\n");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        factorial *= i;
    }
    printf("The value of factorial %d is %d\n", n, factorial);
    return 0;
}