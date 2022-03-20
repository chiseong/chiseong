#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int array[])
{
    int sum, a = 0;
    for (int sum = 0; sum < 6; sum++)
        a += array[sum];
    return a;
}
int main()
{
    int array[6], b=0 ;
    
    printf("6개의 숫자를 입력하세요");
    scanf_s("%d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);
    b = sum(array);
    printf("6개 숫자의 합은 %d입니다", b);

    return 0;
}

