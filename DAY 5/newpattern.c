#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("enter the size of diamond : ");
    scanf("%d",&a);
    char b='A';
    for (int i = 1; i <= a; i++)
    {        
        if(i%2==0){
        for (int s = a-i; s > 0; s--)
        {
        printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j*2);
        }
        printf("\n");
        }
        else{
            for (int s = a-i; s > 0; s--)
        {
        printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",b++);
        }
        b = 'A';
        printf("\n");
        }
    }
        
        
    
    

    getch();
    return 0;
}
