#include<stdio.h>
#include<conio.h>
int main(){
    int *a[3],b[3][3],c[3][3],*d[3];

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&b[i][j]);
    }
    }

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&c[i][j]);
    }
    }


    for (int i = 0; i < 3; i++)
    {
        d[i] = b[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        a[i] = c[i];
    }

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", *(*(d+i)+j) + *(*(a+i)+j));
    }
printf("\n");
    }

    getch();
    return 0;
}