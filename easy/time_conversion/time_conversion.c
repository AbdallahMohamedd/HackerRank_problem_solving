#include "stdio.h"
#include "string.h"
int main()
{
    int x;
    char time[9];
    gets(time);
    if (time[8] == 'p' || time[8] == 'P')
    {
        if ((time[0] == '1') && (time[1] == '2'))
        {
            for (int i = 0; i < 8; i++)
                printf("%c", time[i]);
            return 0;
        }
        time[0] = time[0] - '0';
        time[1] = time[1] - '0';
        x = time[0] * 10 + time[1];
        x = x + 12;
        printf("%d", x);
        for (int i = 2; i < 8; i++)
            printf("%c", time[i]);
    }
    else
    {
        if (time[0] == '1' && time[1] == '2')
        {
            time[0] = '0';
            time[1] = '0';
            for (int i = 0; i < 8; i++)
                printf("%c", time[i]);
            return 0;
        }
        for (int i = 0; i < 8; i++)
            printf("%c", time[i]);
    }
}
