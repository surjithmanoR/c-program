
#include<stdio.h>
int add(int *x,int *y)
{
    int result=*x+*y;
    return result;

}
int sub(int*x,int*y)
{
    int result=*x-*y;
    return result;
}
int mul(int*x,int*y)
{
    int result=(*x)*(*y);
    return result;
}
int div(int*x,int*y)
{
    int result=(*x)/(*y);
    return result;
}

int main()
{
    int a,b,result,ch;
    printf("Enter two num: ");
    scanf("%d %d",&a,&b);
    printf("Choises\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");
    printf("Enter the Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            result=add(&a,&b);
            printf("ADD:%d",result);
            break;
        case 2:
            result=sub(&a,&b);
            printf("SUB:%d",result);
            break;
        case 3:
            result=div(&a,&b);
            printf("DIV:%d",result);
            break;
        case 4:
            result=mul(&a,&b);
            printf("MUL:%d",result);
            break;
        default:
            printf("Invaliid Choice");

    }
    return 0;
}
