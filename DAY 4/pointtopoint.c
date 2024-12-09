#include<stdio.h>
#include<conio.h>
int main(){
    int a,b, *p1, *p2;
    printf("Enter a number : ");
    scanf("%d",&a);

    p1 = &a;
    p2 = &b;

    printf("Sum = %d\n",*p1 + *p2);
    printf("Diff = %d\n",*p1 - *p2);
    printf("Prod = %d\n",*p1 * *p2);
    printf("Quotient = %d\n",*p1 / *p2);


    getch();
    return 0;
}