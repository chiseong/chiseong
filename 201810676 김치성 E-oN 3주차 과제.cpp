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
    
    printf("6���� ���ڸ� �Է��ϼ���");
    scanf_s("%d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);
    b = sum(array);
    printf("6�� ������ ���� %d�Դϴ�", b);

    return 0;
}

