#include<stdio.h>

int main()

{
    int a;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d",&a);

    for(int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            printf("�Է��� ���ڴ� �Ҽ��� �ƴմϴ�");
            break;
        }
        else
        printf("�Ҽ��Դϴ�");
    }

}