#include "stdio.h"
int main()
{
    int t = 0;
    int pve = 0, nve = 0, zeros = 0;
    int data[1000];
    //printf("Enter the totla number: ");
    scanf("%d", &t);
    //printf("Enter the numbers: ");
    for (int i = 0; i < t; i++)
        scanf("%d", &data[i]);
    for (int i = 0; i < t; i++)
        if (data[i] > 0)
            pve++;
        else if (data[i] < 0)
            nve++;
        else
            zeros++;

    printf("%f\n%f\n%f", (float)pve / t, (float)nve / t, (float)zeros / t);
}