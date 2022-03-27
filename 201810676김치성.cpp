#include <stdio.h>

int main()
{
    int a[6];
    int b, c, d;

    printf("숫자를 입력하세요 ex)'1 2 3 4 5 6' \n");
    scanf_s("'%d %d %d %d %d %d'", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

    for (b = 0; b < 6; b++)
    {
        for (c = 0; c < 5 - b; c++)
        {
            if (a[c] > a[c + 1])
            {
                d = a[c];
                a[c] = a[c + 1];
                a[c + 1] = d;
            }
        }

    }
    printf("'[%d, %d, %d, %d, %d, %d]'", a[0], a[1], a[2], a[3], a[4], a[5]);

    return 0;

}