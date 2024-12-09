#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("enter the size : ");
    scanf("%d",&a);
    for (int t = 1; t <= a; t++)
    {
    if(t%2==0){
    for (int i = 1; i <= t; i++)
    {    

        printf("%d ",i*2);            
    }
        printf("\n");
        }
    
    else{
    for (int i = 1; i <= t; i++)
    {    

        printf("%d ",i*2-1);            
    }
        printf("\n");
        }
}
        

    

    getch();
    return 0;
}
