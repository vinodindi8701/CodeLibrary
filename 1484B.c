#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void fun(long int a[], int n)
{
    long int c = a[1] - a[0], m;

    if (a[2] == 0)
    {
        m = c * 2;
    }
    else
    {
        m = a[2] + c - a[3];
    }

    if (c < 0 || m < 0)
    {
        printf("-1\n");
        return;
    }

    if (c == 0 && m == 0)
    {
        printf("0\n");
        return;
    }

    for (int i = 4; i < n; i++)
    {
        if (a[i] == (a[i - 1] + c) % m)
        {
            continue;
        }
        else
        {
            printf("%d", -1);
            return;
        }
    }

    printf("%ld %ld\n", m, c);
}

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        long int arr[100000];

        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            scanf("%ld", &arr[j]);
        }

        fun(arr, n);
    }
}