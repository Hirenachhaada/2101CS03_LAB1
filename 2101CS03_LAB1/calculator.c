#include<stdio.h>
int main()
{
    int option;
    printf("1. To get addition of two numbers\n");
    printf("2. To get subtraction of two numbers\n");
    printf("3. To get multiplication of two numbers\n"); // printing
    printf("4. To get division of two numbers\n");
    printf("5. To get remainder of two numbers\n");
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
    if(option==4)
    {
        // code for division two numbers
        float num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("The value of division is %d\n", num1/num2);
        return 0;
    }
    if(option==5)
    {
        // code for remainder of two numbers
        int num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("The value of division is %d\n", num1 % num2);
        return 0;
    }
    


}
