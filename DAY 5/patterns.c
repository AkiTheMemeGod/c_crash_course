#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("enter the size of diamond : ");
    scanf("%d",&a);
    int b=1;
    for (int i = 1; i <= a; i++)
    {        
        for (int j = a-i; j > 0; j--)
        {
        printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",b++);
        }
        printf("\n");
        }
        
    for (int i = a; i >= 1; i--)
    {        
        for (int j = 0; j <= a - i; j++)
        {
        printf(" ");
        }
        for (int j = i; j > 1; j--)
        {
            printf("%d ",b++);
        }
        printf("\n");
        }

        
        
    
    

    getch();
    return 0;
}
