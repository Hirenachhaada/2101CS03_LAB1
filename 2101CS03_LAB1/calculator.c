#include<stdio.h>
int main()
{
    int option;
    printf("1. To add two numbers\n");
    printf("2. To add two numbers\n");
    printf("3. To add two numbers\n");
    scanf("%d", &option);
    if(option==1)
    {
        // code for adding two numbers
        int num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("The value of sum is%d\n", num1 + num2);
        return 0;
    }
    if(option==2)
    {
        // code for subtraction two numbers
        int num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("The value of difference is%d\n", num1 - num2);
        return 0;
    }
    if(option==3)
    {
        // code for multiplication two numbers
        int num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("The value of multiplication is%d\n", num1*num2);
        return 0;
    }


}