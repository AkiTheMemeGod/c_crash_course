#include<stdio.h>
#include<conio.h>
int main(){
    int *a,b[5],c[5],*d;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&c[i]);
    }
    a=b;
     for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(a+i) + *(b+i));
    }
    

    getch();
    return 0;
}