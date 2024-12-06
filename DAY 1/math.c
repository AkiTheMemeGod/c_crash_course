#include<stdio.h>
#include<conio.h>
int main(){
    float num1,num2,num3;

    printf("Enter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);


    printf("Sum of  %.3f + %.3f ===> %.3f\n",num1,num2,num1+num2);
    printf("dif of %.3f - %.3f ===> %.3f\n",num1,num2,num1-num2);
    printf("div of %.3f / %.3f ===> %.3f\n",num1,num2,num1/num2);
    printf("mul of %.3f * %.3f ===> %.3f",num1,num2,num1*num2);

    getch();
    return 0;
}