#include<stdio.h>
int main()
{
    int option;
    printf("1. To add two numbers\n");
    scanf("%d", &option);
    if(option==1)
    {
        // code for adding two numbers
        int num1,num2;
        printf("Enter two numbers: ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("%d\n", num1 + num2);
        return 0;
    }

}