#include<stdio.h>

int main()
{
    int mark;
    printf("Enter your mark :");
    scanf("%d", &mark);

    if(mark >= 40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}
