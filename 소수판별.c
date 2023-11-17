#include<stdio.h>

int main()

{
    int a;

    printf("숫자를 입력하세요: ");
    scanf("%d",&a);

    for(int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            printf("입력한 숫자는 소수가 아닙니다");
            break;
        }
        else
        printf("소수입니다");
    }

}