#include<stdio.h>
#include<conio.h>
int main(){
    
    int a;
    printf("Enter a Range to print prime numbers : ");
    scanf("%d",&a);

    for (int i = 2; i <= a; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    

    getch();
    return 0;

}