#include "stdio.h"
int main()
{
    long long int data[5];
    long long int max, min, b = 0, sumx = 0, sumn = 0, g = 0;
    for (int i = 0; i < 5; i++)
        scanf("%lld", &data[i]);
    for (int i = 0; i < 5; i++)
    {
        b = 0;
        for (int k = 0; k < 5; k++)
        {
            if (k == i)
            {
                g++;
                if (g != 4)
                {
                    continue;
                }
                else
                {
                    max = i;
                }
            }
            else if (data[i] > data[k])
            {
                b++;
                if (b == 4)
                {
                    max = i;
                }
            }
            else if (data[i] < data[k])
                break;
        }
    }
    g=0;
    for (int i = 0; i < 5; i++)
    {
        b = 0;
        for (int k = 0; k < 5; k++)
        {
            if (k == i)
            {
                g++;
                if (g != 4)
                {
                    continue;
                }
                else
                {
                    min = i;
                }
            }
            else if (data[i] < data[k])
            {
                b++;
                if (b == 4)
                {
                    min = i;
                }
            }
            else if (data[i] > data[k])
                break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == max)
            continue;
        else
        {
            sumx += data[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == min)
            continue;
        else
        {
            sumn += data[i];
        }
    }

    printf("%lld %lld", sumx, sumn);
}
