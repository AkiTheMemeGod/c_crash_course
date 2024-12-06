#include<stdio.h>
#include<conio.h>
int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int sub(int a,int b){
    return (a>b) ? a-b : b-a;
}
int mod(int a,int b){
    return a%b;
}
int main(){


    int a,b;
    printf("Enter any 2 numbers : ");
    scanf("%d %d",&a,&b);
    printf("The Sum of %d and %d is %d\n",a,b,add(a,b));
    printf("The diff of %d and %d is %d\n",a,b,sub(a,b));
    printf("The product of %d and %d is %d\n",a,b,mul(a,b));
    printf("The quotient of %d and %d is %d\n",a,b,div(a,b));
    printf("The mod of %d and %d is %d\n",a,b,mod(a,b));

    getch();
    return 0;
}

