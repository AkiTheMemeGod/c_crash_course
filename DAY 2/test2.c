#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,product=0, i = 1;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    while(i<=b){
        product += a;
        i++;
    }
    printf("\n PRoduct : %d",product);
    getch();
    return 0;
}