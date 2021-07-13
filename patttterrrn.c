#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int len = 2 * n - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int m;
            m = i < j ? i : j;
            m = m < len - i ? m : len - i - 1;
            m = m < len - j - 1 ? m : len - j - 1;
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}