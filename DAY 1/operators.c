#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    int a,b;
    char name[20] = "Ethan";
    bool x = 1;

    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    
/*
    printf("is %d < %d ==> %d\n",a,b, a < b);
    printf("is %d > %d ==> %d\n",a,b, a > b);
    printf("is %d <= %d ==> %d\n",a,b, a <= b);
    printf("is %d >= %d ==> %d\n",a,b, a >= b);
    printf("is %d == %d ==> %d\n",a,b, a == b);

    printf("is %d < %d AND %d >%d ==> %d\n",a,b, a, b, (a<b&&a>b));
    printf("is %d < %d OR %d >%d ==> %d\n",a,b, a, b, (a<b||a>b));
    printf("is NOT(%d < %d) ==> %d\n",a,b, !(a<b));*/

    /*a+=b;
    printf("A = %d\n",a);
    a-=b;
    printf("A = %d\n",a);

    a*=b;
    printf("A = %d\n",a);

    a/=b;
    printf("A = %d\n",a);*/
    

    //(a>b) ? printf("A is greater than b") : printf("B is greater than A");
    printf("Min = %d\n",(a<b) ? a : b);


    getch();
    return 0;
}

