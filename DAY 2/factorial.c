#include<stdio.h>
#include<conio.h>
void myForLoop(int ,int);
int main(){
    int i,x;
    printf("Enter a number : ");
    scanf("%d",&x);
    myForLoop(i,x);







getch();
return 0;
}

void myForLoop(int i,int x){
    int fact =1 ;
for (i = 1; i >= x; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d",x,fact);
}