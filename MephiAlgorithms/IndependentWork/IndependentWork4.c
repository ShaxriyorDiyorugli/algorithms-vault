#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int k, n, base, flag = 0, sum = 0, addender = 1, counter = 0;
    scanf("%d", &k);
    for (n = 1; n < LONG_MAX; ++n)
    {
        base = 3 * n - 1; 
        for (int j = 1; j <= k; ++j)
        {
            if (addender > LONG_MAX / base)
            {
                flag = 1;
                break;
            }
            addender *= base;
        }
        if (flag == 1)
        {
            break;
        }
        if (sum >= LONG_MAX - addender)
        {
            flag = 2;
            break;
        }
        sum += addender;
        addender = 1;
        counter++;
    }
    printf("%d\n", sum);
    printf("%d\n", counter);
    if (flag == 1)
    {
        printf("*\n");
    }
    else if (flag == 2)
    {
        printf("+\n");
    }
    return 0;
}
