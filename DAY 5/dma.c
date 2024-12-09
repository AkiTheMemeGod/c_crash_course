#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){


    float *a;
    a = (float *)calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++)
    {   printf("Element %d : ",i);

        scanf("%f",&a[i]);
    }
    a = (float *)realloc(a,10);
    for (int i = 5; i < 10; i++)
    {   printf("Element %d : ",i);

        scanf("%f",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {   
        printf("Element  : %f \n",a[i]);
    }
    


    getch();
    return 0;

}