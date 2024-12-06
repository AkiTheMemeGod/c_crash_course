#include<stdio.h>
#include<conio.h>
void swapvalue(int a,int b){
    int c = a;
        a =b;
        b=c;
        printf("In swap function\n");
        printf("a = %d, b = %d\n",a,b);
}
void swapreference(int *a,int *b){
    int c = *a;
        *a =*b;
        *b = c;
        printf("In swap function\n");
        printf("a = %d, b = %d\n",*a,*b);
}
int main(){
    int a = 10,b = 20;
    swapreference(&a,&b);
    printf("In main function\n");
    printf("a = %d, b = %d",a,b);
    getch();
    return 0;
}